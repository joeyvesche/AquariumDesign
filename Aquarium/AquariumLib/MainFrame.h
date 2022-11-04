/**
 * @file MainFrame.h
 * @author joeyv
 *
 *
 */

#ifndef AQUARIUM_MAINFRAME_H
#define AQUARIUM_MAINFRAME_H

/**
 * The top-level (main) frame of the application
 */
class MainFrame : public wxFrame
{
public:
    void Initialize();
    void OnExit(wxCommandEvent& event);
    void AboutIt(wxCommandEvent& event);
};

#endif //AQUARIUM_MAINFRAME_H
