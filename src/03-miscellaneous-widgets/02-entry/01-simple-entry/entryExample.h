#ifndef ENTRY_EXAMPLE_H
#define ENTRY_EXAMPLE_H

#include <gtkmm.h>

class EntryExample : public Gtk::Window
{
public:
    EntryExample();
    virtual ~EntryExample();

protected:
    // Signal Hanlders
    void on_checkbox_editable_toggled();
    void on_checkbox_visibility_toogled();
    void on_button_close();

    // Children Widgets
    Gtk::Box m_HBox;
    Gtk::Box m_VBox;
    Gtk::Entry m_Entry;
    Gtk::Button m_Button_Close;
    Gtk::CheckButton m_CheckButton_Editable, m_CheckButton_Visable;

};

#endif //ENTRY_EXAMPLE_H