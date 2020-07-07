#ifndef SALARIO_H
#define SALARIO_H

#include <QObject>

class Salario : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString nombre READ nombre WRITE setNombre)
    Q_PROPERTY(int hora READ hora WRITE setHora)
public:
    explicit Salario(QObject *parent = nullptr);
    Salario(QString nombre, int hora);
        // Geters
        QString nombre() const;
        int hora() const;
        // Seters
        void setNombre(QString nombre);
        void setHora(int hora);

signals:
private:
    QString m_nombre;
    int m_hora;

};

#endif // SALARIO_H
