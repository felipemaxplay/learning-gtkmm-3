#include "radioExample.h"
#include <gtkmm/application.h>

int main(int argc, char * argv[])
{

    auto app = Gtk::Application::create(argc, argv, "br.com.felipemaxplay.radioButtonExamples");

    RadioButtons radioButtons;

    //Shows the window and returns when it is closed.
    app -> run(radioButtons);
}