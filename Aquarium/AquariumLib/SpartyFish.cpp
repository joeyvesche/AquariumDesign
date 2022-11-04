/**
 * @file SpartyFish.cpp
 * @author joeyv
 */

#include "pch.h"
#include "SpartyFish.h"
#include "Aquarium.h"
#include <string>

using namespace std;

/// Fish filename
const wstring SpartyFishImageName = L"images/sparty-fish.png";

/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
SpartyFish::SpartyFish(Aquarium *aquarium) : Fish(aquarium, SpartyFishImageName)
{
    SetSpeed(30, 30);
}

/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* SpartyFish::XmlSave(wxXmlNode* node)
{
    auto itemNode = Fish::XmlSave(node);

    itemNode->AddAttribute(L"type", L"sparty");

    return itemNode;
}
