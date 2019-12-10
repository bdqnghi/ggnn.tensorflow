/**
 * Creates a new BitmapFontCache for this font. Using this method allows the font to provide the BitmapFontCache
 * implementation to customize rendering.
 * <p>
 * Note this method is called by the BitmapFont constructors. If a subclass overrides this method, it will be called before the
 * subclass constructors.
 */
public BitmapFontCache newFontCache() {
    return new BitmapFontCache(this, integer);
}
