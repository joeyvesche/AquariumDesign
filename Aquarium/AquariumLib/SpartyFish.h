/**
 * @file SpartyFish.h
 * @author joeyv
 *
 *
 */

#ifndef AQUARIUM_SPARTYFISH_H
#define AQUARIUM_SPARTYFISH_H

#include "Fish.h"

class SpartyFish : public Fish {
private:

public:
    /// Default constructor (disabled)
    SpartyFish() = delete;

    /// Copy constructor (disabled)
    SpartyFish(const SpartyFish &) = delete;

    /// Assignment operator
    void operator=(const SpartyFish &) = delete;

    SpartyFish(Aquarium* aquarium);

    wxXmlNode* XmlSave(wxXmlNode* node) override;


};

#endif //AQUARIUM_SPARTYFISH_H
