#include "entryExample.h"
#include <iostream>

EntryExample::EntryExample()
    : m_VBox(Gtk::ORIENTATION_VERTICAL),
      m_Button_Close("Close"),
      m_CheckButton_Visable("Editable"),
      m_CheckButton_Editable("Editable")
{

    //set properties window
    set_size_request(200, 100);
    set_title("Simple Entry");

    //add m_VBox in Window
    add(m_VBox);

    m_Entry.set_max_length(50);
    m_Entry.set_text("Hello");
    //Você pode pegar o texto da entrada com o get_text()
    m_Entry.set_text(m_Entry.get_text() + " World");
    m_Entry.select_region(0, m_Entry.get_text_length());

    m_VBox.pack_start(m_Entry);

    // Note that add() can also be used instead of pack_xxx()
    m_VBox.add(m_HBox);

    m_HBox.pack_start(m_CheckButton_Editable);
    m_CheckButton_Editable.signal_toggled().connect(sigc::mem_fun(*this,
        &EntryExample::on_checkbox_editable_toggled));
    m_CheckButton_Editable.set_active(true);

    m_HBox.pack_start(m_CheckButton_Visable);
    m_CheckButton_Visable.signal_toggled().connect(sigc::mem_fun(*this,
        &EntryExample::on_checkbox_visibility_toogled));
    m_CheckButton_Visable.set_active(true);
    
    m_Button_Close.signal_clicked().connect(sigc::mem_fun(*this,
        &EntryExample::on_button_close));
    m_VBox.pack_start(m_Button_Close);
    m_Button_Close.set_can_default();
    m_Button_Close.grab_default();

    show_all_children();

}

EntryExample::~EntryExample()
{
}

void EntryExample::on_checkbox_editable_toggled()
{
    m_Entry.set_editable(m_CheckButton_Editable.get_active());
}

void EntryExample::on_checkbox_visibility_toogled()
{
    m_Entry.set_visibility(m_CheckButton_Visable.get_active());
}

void EntryExample::on_button_close()
{
    hide();
}