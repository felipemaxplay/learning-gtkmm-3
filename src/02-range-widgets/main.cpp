#include "rangeWidget.h"
#include <gtkmm/application.h>

int main(int argc, char * argv[] )
{

    auto app = Gtk::Application::create(argc, argv, "br.com.felipemaxplay.rangeExample");

    RangeWidgetExample rangeWidgetExample;

    return app -> run(rangeWidgetExample);
}