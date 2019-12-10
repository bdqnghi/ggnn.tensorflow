/**
 * Switches the {@link BitmapFont}. The given font won't be disposed when {@link #dispose()} is called.
 */
public void setFont(BitmapFont font) {
    if (ownsFont && this.font != null) {
        this.font.dispose();
    }
    this.font = font;
    ownsFont = false;
}
