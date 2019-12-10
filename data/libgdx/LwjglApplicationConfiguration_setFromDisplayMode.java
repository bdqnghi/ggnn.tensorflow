/**
 * Sets the r, g, b and a bits per channel based on the given {@link DisplayMode} and sets the fullscreen flag to true.
 * @param mode
 */
public void setFromDisplayMode(DisplayMode mode) {
    this.width = mode.width;
    this.height = mode.height;
    if (mode.bitsPerPixel == 16) {
        this.r = 5;
        this.g = 6;
        this.b = 5;
        this.a = 0;
    }
    if (mode.bitsPerPixel == 24) {
        this.r = 8;
        this.g = 8;
        this.b = 8;
        this.a = 0;
    }
    if (mode.bitsPerPixel == 32) {
        this.r = 8;
        this.g = 8;
        this.b = 8;
        this.a = 8;
    }
    this.fullscreen = true;
}
