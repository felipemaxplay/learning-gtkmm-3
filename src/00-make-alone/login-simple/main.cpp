#include "myWindow.h"
#include <gtkmm/application.h>

int main(int argc, char * argv[])
{
    auto app = Gtk::Application::create(argc, argv, "br.com.felipemaxplay.myWindow");

    MyWindow myWindow;

    return app -> run(myWindow);
}