/**
 * @file Fish.h
 * @author joeyv
 *
 *
 */

#ifndef AQUARIUM_FISH_H
#define AQUARIUM_FISH_H

#include "Item.h"
#include <random>

/**
 * Base class for a fish
 * This applies to all the fish, but not the decor
 * items in the aquarium.
 */
class Fish : public Item{
private:
    /// Default constructor (disabled)
    Fish() = delete;

    /// Copy constructor (disabled)
    Fish(const Fish &) = delete;

    /// Assignment operator
    void operator=(const Fish &) = delete;

    /// Fish speed in the X direction
    /// in pixels per second
    double mSpeedX;

    /// Fish speed in the Y direction
    /// in pixels per second
    double mSpeedY;

protected:
    Fish(Aquarium *aquarium, const std::wstring &filename);

public:
    void Update(double elapsed) override;
    wxXmlNode *XmlSave(wxXmlNode *node) override;
    void XmlLoad(wxXmlNode *node) override;
    void SetSpeed(double x, double y){mSpeedX = x; mSpeedY = y;}

};

#endif //AQUARIUM_FISH_H
