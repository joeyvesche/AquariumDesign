/**
 * @file StinkyFish.cpp
 * @author joeyv
 */

#include "pch.h"
#include "StinkyFish.h"
#include "Aquarium.h"
#include <string>

using namespace std;

/// Fish filename
const wstring StinkyFishImageName = L"images/stinky.png";

/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
StinkyFish::StinkyFish(Aquarium *aquarium) : Fish(aquarium, StinkyFishImageName)
{
    SetSpeed(300, -20);
}

/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* StinkyFish::XmlSave(wxXmlNode* node)
{
    auto itemNode = Fish::XmlSave(node);

    itemNode->AddAttribute(L"type", L"stinky");

    return itemNode;
}




