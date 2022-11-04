/**
 * @file Item.h
 * @author joeyv
 *
 *Base class for any item in our aquarium.
 */

#ifndef AQUARIUM_ITEM_H
#define AQUARIUM_ITEM_H

class Aquarium;

/**
 * Base class for any item in our aquarium.
 */
class Item {
private:
    /// The aquarium this item is contained in
    Aquarium   *mAquarium;

    // Item location in the aquarium
    double  mX = 0;     ///< X location for the center of the item
    double  mY = 0;     ///< Y location for the center of the item
    bool mMirror = false;   ///< True mirrors the item image

    /// The underlying fish image
    std::unique_ptr<wxImage> mItemImage;

    /// The bitmap we can display for this fish
    std::unique_ptr<wxBitmap> mItemBitmap;

protected:
    Item(Aquarium *aquarium, const std::wstring &filename);

public:
    virtual ~Item();

    /// Default constructor (disabled)
    Item() = delete;

    /// Copy constructor (disabled)
    Item(const Item &) = delete;

    /// Assignment operator
    void operator=(const Item &) = delete;

    /**
     * The X location of the item
     * @return X location in pixels
     */
    double GetX() const { return mX; }

    /**
     * The Y location of the item
     * @return Y location in pixels
     */
    double GetY() const { return mY; }

    /**
     * Set the item location
     * @param x X location in pixels
     * @param y Y location in pixels
     */
    void SetLocation(double x, double y) { mX = x; mY = y; }

    /**
    * Test this item
     * to see if it has been clicked on
    * @param x X location on the aquarium to test in pixels
    * @param y Y location on the aquarium to test in pixels
    * @return true if clicked on
    */
    bool HitTest(int x, int y);

    double DistanceTo(std::shared_ptr<Item> item);
    void Draw(wxDC* dc);
    virtual wxXmlNode *XmlSave(wxXmlNode *node);
    virtual void XmlLoad(wxXmlNode *node);

    /**
     * Handle updates for animation
     * @param elapsed The time since the last update
     */
    virtual void Update(double elapsed) {}

    /**
     * Get the pointer to the Aquarium object
     * @return Pointer to Aquarium object
     */
    Aquarium *GetAquarium() { return mAquarium;  }

    void SetMirror(bool m);

    /**
     * Get the length of the Fish
     * @return Length of fish
     */
    double GetLength(){return mItemBitmap->GetWidth();}
};

#endif //AQUARIUM_ITEM_H
