// Utility method to grab a font by style/size pair
public BitmapFont getFont(FontStyle style, FontSize size) {
    return fontMap.get(style).get(size);
}
