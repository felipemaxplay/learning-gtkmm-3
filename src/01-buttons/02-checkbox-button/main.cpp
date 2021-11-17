#include "checkboxExample.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{

    auto app = Gtk::Application::create(argc, argv, "br.com.felipemaxplay.checkboxExample");
 
    ExampleWindow Window;
    
    //Shows the window and returns when it is closed.
    return app -> run(Window);
}