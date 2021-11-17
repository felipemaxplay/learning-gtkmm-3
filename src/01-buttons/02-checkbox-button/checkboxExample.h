#ifndef CHECKBOX_EXAMPLE_H
#define CHECKBOX_EXAMPLE_H

#include <gtkmm/window.h>
#include <gtkmm/checkbutton.h>

class ExampleWindow : public Gtk::Window
{

public:
    ExampleWindow();
    virtual ~ExampleWindow();

protected:
    //Signal Handlers
    void on_button_clicked();

    //Child widget
    Gtk::CheckButton m_button;
};

#endif