/**
 * Generates a new {@link BitmapFont}. The size is expressed in pixels. Throws a GdxRuntimeException if the font could not be
 * generated. Using big sizes might cause such an exception.
 * @param parameter configures how the font is generated
 */
public BitmapFont generateFont(FreeTypeFontParameter parameter, FreeTypeBitmapFontData data) {
    generateData(parameter, data);
    if (data.regions == null && parameter.packer != null) {
        data.regions = new Array();
        parameter.packer.updateTextureRegions(data.regions, parameter.minFilter, parameter.magFilter, parameter.genMipMaps);
    }
    BitmapFont font = new BitmapFont(data, data.regions, true);
    font.setOwnsTexture(parameter.packer == null);
    return font;
}
