#include "salario.h"

Salario::Salario(QObject *parent) : QObject(parent)
{
    m_nombre = "";
    m_hora = 0;
}

Salario::Salario(QString nombre, int hora)
{
     m_nombre = nombre;
     m_hora = hora;
}

QString Salario::nombre() const
{
    return m_nombre;
}

int Salario::hora() const
{
    return m_hora;
}

void Salario::setNombre(QString nombre)
{
    m_nombre = nombre;
}

void Salario::setHora(int hora)
{
    m_hora = hora;
}
