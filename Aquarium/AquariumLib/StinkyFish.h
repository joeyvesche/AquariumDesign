/**
 * @file StinkyFish.h
 * @author joeyv
 *
 *
 */

#ifndef AQUARIUM_STINKYFISH_H
#define AQUARIUM_STINKYFISH_H

#include "Fish.h"

class StinkyFish : public Fish {
private:

public:
    /// Default constructor (disabled)
    StinkyFish() = delete;

    /// Copy constructor (disabled)
    StinkyFish(const StinkyFish &) = delete;

    /// Assignment operator
    void operator=(const StinkyFish &) = delete;

    StinkyFish(Aquarium* aquarium);

    wxXmlNode* XmlSave(wxXmlNode* node) override;

};

#endif //AQUARIUM_STINKYFISH_H
