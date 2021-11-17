#ifndef BUTTON_EXAMPLE_H
#define BUTTON_EXAMPLE_H

#include <gtkmm/window.h>
#include <gtkmm/button.h>

class Buttons : public Gtk::Window
{

public:
    Buttons();
    virtual ~Buttons();

protected:
    //Signal handlers:
    void on_button_clicked();

    //Child widgets:
    Gtk::Button m_button;
};

#endif