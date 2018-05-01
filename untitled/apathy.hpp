#ifndef APATHY_HPP
#define APATHY_HPP

#include <QObject>
#include <QCoreApplication>

class Apathy : public QObject
{
	Q_OBJECT
private:
	QCoreApplication *app;
public:
	explicit Apathy(QObject *parent = nullptr);
	void quit();
signals:
	void finished();
public slots:
	void run();
};

#endif // APATHY_HPP
