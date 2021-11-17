#include "labelExample.h"
#include <iostream>

LabelExample::LabelExample()
    : m_HBox(Gtk::ORIENTATION_HORIZONTAL, 5),
      m_VBox(Gtk::ORIENTATION_VERTICAL, 5),
      m_VBox2(Gtk::ORIENTATION_VERTICAL, 5),
      m_frame_normal("Normal Label"),
      m_frame_multi("Multi Line Label"),
      m_frame_left("Left Justified Label"),
      m_frame_right("Right Justified Label"),
      m_frame_filledWrapped("Filled Wrapped Label"),
      m_frame_lineWrapped("Line Wrapped Label"),
      m_frame_underlined("Underlined Label"),
      m_label_normal("_This is a Normal label", true),
      m_label_multi("This is a Multi-line label.\nSecond line\nThird line"),
      m_label_left("This is a Left-Justified\nMulti-line label.\nThird line"),
      m_label_right("This is a Right-Justified\nMulti-line label.\nThird line"),
      m_label_underlined("This label is underlined!\n"
                         "This one is underlined in quite a funky fashion")
{
    set_title("Labels");
    set_border_width(5);

    add(m_HBox);

    m_HBox.pack_start(m_VBox, Gtk::PACK_SHRINK);

    m_frame_normal.add(m_label_normal);
    m_VBox.pack_start(m_frame_normal, Gtk::PACK_SHRINK);

    m_frame_multi.add(m_label_multi);
    m_VBox.pack_start(m_frame_multi, Gtk::PACK_SHRINK);

    m_label_left.set_justify(Gtk::JUSTIFY_LEFT);
    m_frame_left.add(m_label_left);
    m_VBox.pack_start(m_frame_left, Gtk::PACK_SHRINK);

    m_label_right.set_justify(Gtk::JUSTIFY_RIGHT);
    m_frame_right.add(m_label_right);
    m_VBox.pack_start(m_frame_right, Gtk::PACK_SHRINK);

    m_HBox.pack_start(m_VBox2, Gtk::PACK_SHRINK);

    m_label_lineWrapped.set_text(
        "This is an example of a line-wrapped label.  It "
        /* add a big space to the next line to test spacing */
        "should not be taking up the entire             "
        "width allocated to it, but automatically "
        "wraps the words to fit.  "
        "The time has come, for all good men, to come to "
        "the aid of their party.  "
        "The sixth sheik's six sheep's sick.\n"
        "     It supports multiple paragraphs correctly, "
        "and  correctly   adds "
        "many          extra  spaces. ");
    m_label_lineWrapped.set_line_wrap();
    m_frame_lineWrapped.add(m_label_lineWrapped);
    m_VBox2.pack_start(m_frame_lineWrapped, Gtk::PACK_SHRINK);

    m_label_filledWrapped.set_text(
        "This is an example of a line-wrapped, filled label.  "
        "It should be taking "
        "up the entire              width allocated to it.  "
        "Here is a sentence to prove "
        "my point.  Here is another sentence. "
        "Here comes the sun, do de do de do.\n"
        "    This is a new paragraph.\n"
        "    This is another newer, longer, better "
        "paragraph.  It is coming to an end, "
        "unfortunately.");
    m_label_filledWrapped.set_justify(Gtk::JUSTIFY_FILL);
    m_label_filledWrapped.set_line_wrap();
    m_frame_filledWrapped.add(m_label_filledWrapped);
    m_VBox2.pack_start(m_frame_filledWrapped, Gtk::PACK_SHRINK);

    m_label_underlined.set_justify(Gtk::JUSTIFY_LEFT);
    m_label_underlined.set_pattern(
        "_________________________ _ _________ _ ______"
        "     __ _______ ___");
    m_frame_underlined.add(m_label_underlined);
    m_VBox2.pack_start(m_frame_underlined, Gtk::PACK_SHRINK);

    show_all_children();
}

LabelExample::~LabelExample()
{
}