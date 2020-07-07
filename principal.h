#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <info.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

public slots:
    void calcular();
    void guardar();
    void nuevo();
    void abrir();

private slots:
    void on_mnuAyuda_triggered();

private:
    Ui::Principal *ui;
    void limpiar();
};
#endif // PRINCIPAL_H
