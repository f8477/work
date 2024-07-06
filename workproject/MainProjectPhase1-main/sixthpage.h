#ifndef SIXTHPAGE_H
#define SIXTHPAGE_H

#include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class sixthpageData;

class sixthpage
{
    Q_OBJECT
public:
    sixthpage();
    sixthpage(const sixthpage &);
    sixthpage &operator=(const sixthpage &);
    ~sixthpage();

private:
    QSharedDataPointer<sixthpageData> data;
};

#endif // SIXTHPAGE_H
