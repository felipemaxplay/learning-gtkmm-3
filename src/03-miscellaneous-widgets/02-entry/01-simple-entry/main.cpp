#include "entryExample.h"
#include <gtkmm.h>

int main(int argc, char * argv[] )
{
    auto app = Gtk::Application::create(argc, argv, "br.com.felipemaxplay.entryExample");

    EntryExample entryExample;

    app -> run(entryExample);
}