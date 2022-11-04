/**
 * @file FishBeta.cpp
 * @author joeyv
 */

#include "pch.h"
#include "FishBeta.h"
#include "Aquarium.h"
#include <string>

using namespace std;

/// Fish filename
const wstring FishBetaImageName = L"images/beta.png";

/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
 FishBeta::FishBeta(Aquarium *aquarium) : Fish(aquarium, FishBetaImageName)
{
    SetSpeed(20, -10);
}

/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* FishBeta::XmlSave(wxXmlNode* node)
{
    auto itemNode = Fish::XmlSave(node);

    itemNode->AddAttribute(L"type", L"beta");

    return itemNode;
}




