#include "buttonExample.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{

    auto app = Gtk::Application::create(argc, argv, "br.com.felipemaxplay");

    Buttons buttons;

    //Show the window and return when it its closed
    return app -> run(buttons);
}
