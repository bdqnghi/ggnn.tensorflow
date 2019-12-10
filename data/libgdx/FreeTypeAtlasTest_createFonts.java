protected int createFonts() {
    // This test uses a less efficient but more convenient way to pack multiple generated fonts into a single
    // texture atlas.
    // 
    // 1. Create a new PixmapPacker big enough to fit all your desired glyphs
    // 2. Create a new FreeTypeFontGenerator for each TTF file (i.e. font styles/families)
    // 3. For each size and style, call generator.generateFont() with the packer set on the parameter
    // 4. Generate the texture atlas using packer.generateTextureAtlas or packer.updateTextureAtlas.
    // 5. Dispose of the atlas upon application exit or when you are done using the fonts
    // //////////////////////////////////////////////////////////////////////////////////////////////////////
    // create the pixmap packer
    packer = new PixmapPacker(FONT_ATLAS_WIDTH, FONT_ATLAS_HEIGHT, Format.RGBA8888, 2, false);
    fontMap = new FontMap<BitmapFont>();
    int fontCount = 0;
    // for each style...
    for (FontStyle style : FontStyle.values()) {
        // get the file for this style
        FreeTypeFontGenerator gen = new FreeTypeFontGenerator(Gdx.files.internal(style.path));
        // For each size...
        for (FontSize size : FontSize.values()) {
            // pack the glyphs into the atlas using the default chars
            FreeTypeFontGenerator.FreeTypeFontParameter fontParameter = new FreeTypeFontGenerator.FreeTypeFontParameter();
            fontParameter.size = size.size;
            fontParameter.packer = packer;
            fontParameter.characters = CHARACTERS;
            BitmapFont bmFont = gen.generateFont(fontParameter);
            fontMap.get(style).put(size, bmFont);
            fontCount++;
        }
        // dispose of the generator once we're finished with this family
        gen.dispose();
    }
    // for the demo, show how many glyphs we loaded
    return fontCount * CHARACTERS.length();
}
