#include "helloWorld.h"
#include <gtkmm/application.h>

int main(int argc, char * argv[] )
{
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm3-0");

    HelloWorld helloWorld;

    app -> run(helloWorld);
}