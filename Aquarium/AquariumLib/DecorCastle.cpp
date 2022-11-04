/**
 * @file DecorCastle.cpp
 * @author joeyv
 */

#include "pch.h"
#include "DecorCastle.h"
#include "Aquarium.h"
#include <string>

using namespace std;

/// Castle filename
const wstring DecorCastleImageName = L"images/castle.png";

/**
 * Constructor
 * @param aquarium Aquarium this castle is a member of
 */
DecorCastle::DecorCastle(Aquarium *aquarium) : Item(aquarium, DecorCastleImageName)
{
}

/**
 * Save this castle to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* DecorCastle::XmlSave(wxXmlNode* node)
{
    auto itemNode = Item::XmlSave(node);

    itemNode->AddAttribute(L"type", L"castle");

    return itemNode;
}




