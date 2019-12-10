/**
 * Sets the maximum size that will be used when generating texture atlases for glyphs with <tt>generateData()</tt>. The
 * default is 1024. By specifying {@link #NO_MAXIMUM}, the texture atlas will scale as needed.
 *
 * The power-of-two square texture size will be capped to the given <tt>texSize</tt>. It's recommended that a power-of-two
 * value be used here.
 *
 * Multiple pages may be used to fit all the generated glyphs. You can query the resulting number of pages by calling
 * <tt>bitmapFont.getRegions().length</tt> or <tt>freeTypeBitmapFontData.getTextureRegions().length</tt>.
 *
 * If PixmapPacker is specified when calling generateData, this parameter is ignored.
 *
 * @param texSize the maximum texture size for one page of glyphs
 */
public static void setMaxTextureSize(int texSize) {
    maxTextureSize = texSize;
}
