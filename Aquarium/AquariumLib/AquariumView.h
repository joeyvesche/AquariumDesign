/**
 * @file AquariumView.h
 * @author joeyv
 *
 *
 */

#ifndef AQUARIUM_AQUARIUMVIEW_H
#define AQUARIUM_AQUARIUMVIEW_H
#include "Aquarium.h"

/**
 * View class for our aquarium
 */
class AquariumView : public wxWindow {
private:
    void OnPaint(wxPaintEvent& event);
    /// An object that describes our aquarium
    Aquarium  mAquarium;

    /// The timer that allows for animation
    wxTimer mTimer;

    /// Stopwatch used to measure elapsed time
    wxStopWatch mStopWatch;

    /// The last stopwatch time
    long mTime = 0;

public:
    void Initialize(wxFrame* parent);
    void OnAddFishBetaFish(wxCommandEvent& event);
    void OnLeftDown(wxMouseEvent &event);
    void OnLeftUp(wxMouseEvent &event);
    void OnMouseMove(wxMouseEvent &event);
    void OnAddSpartyFish(wxCommandEvent& event);
    void OnAddStinkyFish(wxCommandEvent& event);
    void OnAddDecorCastle(wxCommandEvent& event);
    void OnFileSaveAs(wxCommandEvent& event);
    void OnFileOpen(wxCommandEvent& event);
    void OnTimer(wxTimerEvent& event);

    /// Any item we are currently dragging
    std::shared_ptr<Item> mGrabbedItem;

};

#endif //AQUARIUM_AQUARIUMVIEW_H
