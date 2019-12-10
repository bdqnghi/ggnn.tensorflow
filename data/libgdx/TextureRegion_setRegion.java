/**
 * Sets the texture to that of the specified region and sets the coordinates relative to the specified region.
 */
public void setRegion(TextureRegion region, int x, int y, int width, int height) {
    texture = region.texture;
    setRegion(region.getRegionX() + x, region.getRegionY() + y, width, height);
}
