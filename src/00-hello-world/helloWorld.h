#ifndef HELLO_WORLD_H
#define HELLO_WORLD_H

#include <gtkmm/window.h>
#include <gtkmm/button.h>

class HelloWorld : public Gtk::Window
{
public:
    HelloWorld();
    virtual ~HelloWorld();
    
protected:
    //Signal Handlers
    void on_button_clicked();

    //children widgets
    Gtk::Button m_button;
  
};

#endif