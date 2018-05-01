#parse("C File Header.h")
#[[#ifndef]]# ${INCLUDE_GUARD}
#[[#define]]# ${INCLUDE_GUARD}

#include <QtTest>

class ${NAME}  : public QObject 
{
Q_OBJECT

private slots:

};

#[[#endif]]# //${INCLUDE_GUARD}