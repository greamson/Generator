#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "abstractfactory.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_exit_clicked();

    void on_pushButton_rase_next_clicked();

    void on_pushButton_class_next_clicked();

    void on_pushButton_rase_prev_clicked();

    void on_pushButton_class_prev_clicked();

    void on_pushButton_clothes_color_1_clicked();

    void on_pushButton_clothes_color_2_clicked();

    void on_pushButton_clothes_color_3_clicked();

    void on_pushButton_body_color_1_clicked();

    void on_pushButton_body_color_2_clicked();

    void on_pushButton_body_color_3_clicked();

    void on_pushButton_face_color_1_clicked();

    void on_pushButton_face_color_2_clicked();

    void on_pushButton_face_color_3_clicked();

    void on_pushButton_face_1_clicked();

    void on_pushButton_face_2_clicked();

    void on_pushButton_face_3_clicked();

    void on_pushButton_hair_type_1_clicked();

    void on_pushButton_hair_type_2_clicked();

    void on_pushButton_hair_type_3_clicked();

    void on_pushButton_hair_color_1_clicked();

    void on_pushButton_hair_color_2_clicked();

    void on_pushButton_hair_color_3_clicked();

    void on_pushButton_weapon_color_1_clicked();

    void on_pushButton_weapon_color_2_clicked();

    void on_pushButton_weapon_color_3_clicked();

    void on_pushButton_finish_clicked();

    void on_textEdit_name_textChanged();

private:
    Ui::MainWindow *ui;
    Character* character = nullptr;
    Rases _rase = Rases::ELF;
    Classes _class = Classes::MAGE;
    Factory_Mage factory1;
    Factory_Thief factory2;
    Factory_Warrior factory3;
    Factory* factories[3] = {&factory1, &factory2, &factory3};

};
#endif // MAINWINDOW_H
