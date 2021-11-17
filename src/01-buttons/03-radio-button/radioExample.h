#ifndef RADIO_BUTTON_EXAMPLE_H
#define RADIO_BUTTON_EXAMPLE_H

#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include <gtkmm/radiobutton.h>
#include <gtkmm/separator.h>

class RadioButtons : public Gtk::Window
{

public:
    RadioButtons();
    virtual ~RadioButtons();

protected:
    //Signal handler
    void on_button_clicked();
    //Child Widgets
    Gtk::Box m_box_top, m_box1, m_box2;
    Gtk::RadioButton m_radioButton1, m_radioButton2, m_radioButton3;
    Gtk::Separator m_separator;
    Gtk::Button m_button_close;
};

#endif //RADIO_BUTTON_EXAMPLE_H