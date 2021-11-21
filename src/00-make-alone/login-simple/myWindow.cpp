#include "myWindow.h"
#include <iostream>

MyWindow::MyWindow()
    : m_VBox(Gtk::ORIENTATION_VERTICAL, 5),
      m_HBox(Gtk::ORIENTATION_HORIZONTAL, 5),
      m_HBox2(Gtk::ORIENTATION_HORIZONTAL, 5),
      m_HBox3(Gtk::ORIENTATION_HORIZONTAL, 5),
      m_Frame("Login Information"),
      m_Checkbutton_Visible("Visible"),
      m_Button_Login("Login"),
      m_Button_Close("Close"),
      m_Label_Username("Username "),
      m_Label_Password("Passoword")
{
    //Window
    set_title("Login");
    set_size_request(300, 100);
    set_border_width(10);

    add(m_Frame);

    //Frame
    m_Frame.add(m_VBox);

    //VBox
    m_VBox.set_border_width(10);
    m_VBox.pack_start(m_HBox);
    m_VBox.pack_start(m_HBox2);
    m_VBox.pack_start(m_HBox3);

    //HBox
    m_HBox.pack_start(m_Label_Username, Gtk::PACK_SHRINK);
    m_HBox.pack_start(m_Entry_Username, Gtk::PACK_EXPAND_WIDGET);

    m_Entry_Username.set_max_length(32);
    m_Entry_Username.set_placeholder_text("Username Here");

    //HBox2
    m_HBox2.pack_start(m_Label_Password, Gtk::PACK_SHRINK);
    m_HBox2.pack_start(m_Entry_Password, Gtk::PACK_SHRINK);
    m_HBox2.pack_start(m_Checkbutton_Visible, Gtk::PACK_EXPAND_PADDING);

    m_Entry_Password.set_max_length(12);
    m_Entry_Password.set_placeholder_text("Password Here");
    m_Entry_Password.set_visibility(false);

    m_Checkbutton_Visible.signal_toggled().connect(sigc::mem_fun(*this,
        &MyWindow::on_visibility_toggled));
    m_Checkbutton_Visible.set_active(false);

    //HBox3
    m_HBox3.pack_start(m_Button_Close);
    m_HBox3.pack_start(m_Button_Login);

    m_Button_Close.signal_clicked().connect(sigc::mem_fun(*this,
        &MyWindow::on_buttton_close));

    //Show All Widgets
    show_all_children();
}

MyWindow::~MyWindow()
{
}

void MyWindow::on_visibility_toggled()
{
    m_Entry_Password.set_visibility(m_Checkbutton_Visible.get_active());
}

void MyWindow::on_buttton_close()
{
    hide();
}