#include <QCoreApplication>
#include <QTimer>
#include "apathy.hpp";
int main(int argc, char* argv[]){
	QCoreApplication app(argc,argv);
	Apathy ourOn;
	QObject::connect(&ourOn,&Apathy::finished,&app,&QCoreApplication::quit);

	QTimer::singleShot(10,&ourOn,&Apathy::run);
	return app.exec();
	return 0;
}
