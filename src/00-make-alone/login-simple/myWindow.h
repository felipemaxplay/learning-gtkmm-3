#ifndef MY_WINDOW_H
#define MY_WINDOW_H

#include <gtkmm/window.h>
#include <gtkmm/frame.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/button.h>
#include <gtkmm/checkbutton.h>

class MyWindow : public Gtk::Window
{
public:
    MyWindow();
    virtual ~MyWindow();

protected:
    //Signal Handler
    void on_visibility_toggled();
    void on_buttton_close();

    //Childrens Widgets
    Gtk::Frame m_Frame;
    Gtk::Box m_HBox, m_HBox2, m_HBox3, m_VBox;    
    Gtk::Label m_Label_Username, m_Label_Password;
    Gtk::Entry m_Entry_Username, m_Entry_Password;
    Gtk::CheckButton m_Checkbutton_Visible;
    Gtk::Button m_Button_Close, m_Button_Login;

};

#endif //MY_WINDOW_H