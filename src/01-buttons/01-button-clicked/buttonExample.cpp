#include "buttonExample.h"
#include <iostream>

Buttons::Buttons()
{

    m_button.add_pixlabel("info.xpm", "Nice Button");

    set_title("Pixmap'd buttons!!!");
    set_border_width(10);

    m_button.signal_clicked().connect(sigc::mem_fun(*this,
        &Buttons::on_button_clicked));
    
    add(m_button);

    show_all_children();
}

Buttons::~Buttons()
{

}

void Buttons::on_button_clicked()
{
    std::cout << "The button was clicked" << std::endl;
}