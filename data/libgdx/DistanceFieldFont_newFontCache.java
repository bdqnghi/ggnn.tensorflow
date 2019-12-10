@Override
public BitmapFontCache newFontCache() {
    return new DistanceFieldFontCache(this, integer);
}
