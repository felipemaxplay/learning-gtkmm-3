#ifndef LABEL_EXAMPLE_H
#define LABEL_EXAMPLE_H

#include <gtkmm.h>

class LabelExample : public Gtk::Window
{
public:
    LabelExample();
    virtual ~LabelExample();

protected:
    //Child Widgets
    Gtk::Box m_HBox;
    Gtk::Box m_VBox, m_VBox2;
    Gtk::Frame m_frame_normal, m_frame_multi, m_frame_left, m_frame_right,
        m_frame_lineWrapped, m_frame_filledWrapped, m_frame_underlined;
    Gtk::Label m_label_normal, m_label_multi, m_label_left, m_label_right,
        m_label_lineWrapped, m_label_filledWrapped, m_label_underlined;
};

#endif