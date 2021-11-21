#include "helloWorld.h"
#include <iostream>

HelloWorld::HelloWorld()
    :   m_button("Click Here")
{

    set_title("Hello World");
    set_default_size(250, 0);
    set_border_width(10);
    
    m_button.signal_clicked().connect(sigc::mem_fun(*this,
        &HelloWorld::on_button_clicked));
    
    add(m_button);

    show_all_children();
}

HelloWorld::~HelloWorld()
{}

void HelloWorld::on_button_clicked()
{
    std::cout << "Hello World! Welcome to gtkmm 3.0" << std::endl;
}