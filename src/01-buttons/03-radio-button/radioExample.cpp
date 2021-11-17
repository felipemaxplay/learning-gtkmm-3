#include "radioExample.h"
#include <iostream>

RadioButtons::RadioButtons() :
    m_box_top(Gtk::ORIENTATION_VERTICAL),
    m_box1(Gtk::ORIENTATION_VERTICAL, 10),
    m_box2(Gtk::ORIENTATION_VERTICAL, 10),
    m_radioButton1("Button 1"),
    m_radioButton2("Button 2"),
    m_radioButton3("Button 3"),
    m_button_close("Close")
{

    // Set title and border of the window
    set_title("Radio Buttons");
    set_default_size(260, 0);
    set_border_width(0);

    // Put radio buttons 2 and 3 in the same group as 1:
    m_radioButton2.join_group(m_radioButton1);
    m_radioButton3.join_group(m_radioButton1);

    // Add outer box to the window (because the window
    // can only contain a single widget)
    add(m_box_top);    

    //Put the inner boxes and the separator in the outer box:
    m_box_top.pack_start(m_box1);
    m_box_top.pack_start(m_separator);
    m_box_top.pack_start(m_box2);

    // Set the inner boxes' borders
    m_box2.set_border_width(10);
    m_box1.set_border_width(10);

    // Put the radio buttons in Box1:
    m_box1.pack_start(m_radioButton1);
    m_box1.pack_start(m_radioButton2);
    m_box1.pack_start(m_radioButton3);

    // Set the second button active
    m_radioButton2.set_active();

    // Put Close button in Box2:
    m_box2.pack_start(m_button_close);

    // Make the button the default widget
    m_button_close.set_can_default();
    m_button_close.grab_default();

    // Connect the clicked signal of the button to
    m_button_close.signal_clicked().connect(sigc::mem_fun(*this,
        &RadioButtons::on_button_clicked));

    // Show all children of the window
    show_all_children();
}

RadioButtons::~RadioButtons()
{

}

void RadioButtons::on_button_clicked()
{

    hide(); //to close the application.
}