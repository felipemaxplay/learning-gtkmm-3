#include "labelExample.h"
#include <gtkmm/application.h>

int main(int argc, char * argv[] )
{
    auto app = Gtk::Application::create(argc, argv, "br.felipemaxplay.labelExample");

    LabelExample labelExample;

    app -> run(labelExample);
}