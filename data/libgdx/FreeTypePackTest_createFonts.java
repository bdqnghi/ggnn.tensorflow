protected int createFonts() {
    // //////////////////////////////////////////////////////////////////////////////////////////////////////
    // //////Steps to use multiple FreeTypeFontGenerators with a single texture atlas://////////////////////
    // 1. Create a new PixmapPacker big enough to fit all your desired glyphs
    // 2. Create a new FreeTypeFontGenerator for each file (i.e. font styles/families)
    // 3. Pack the data by specifying the PixmapPacker parameter to generateData
    // Keep hold of the returned BitmapFontData for later
    // 4. Repeat for other sizes.
    // 5. Dispose the generator and repeat for other font styles/families
    // 6. Get the TextureRegion(s) from the packer using packer.updateTextureRegions()
    // 7. Dispose the PixmapPacker
    // 8. Use each BitmapFontData to construct a new BitmapFont, and specify your TextureRegion(s) to the font constructor
    // 9. Dispose of the Texture upon application exit or when you are done using the font atlas
    // //////////////////////////////////////////////////////////////////////////////////////////////////////
    // create the pixmap packer
    PixmapPacker packer = new PixmapPacker(FONT_ATLAS_WIDTH, FONT_ATLAS_HEIGHT, Format.RGBA8888, 2, false);
    // we need to load all the BitmapFontDatas before we can start loading BitmapFonts
    FontMap<BitmapFontData> dataMap = new FontMap<BitmapFontData>();
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
            BitmapFontData data = gen.generateData(fontParameter);
            // store the info for later, when we generate the texture
            dataMap.get(style).put(size, data);
        }
        // dispose of the generator once we're finished with this family
        gen.dispose();
    }
    // Get regions from our packer
    regions = new Array<TextureRegion>();
    packer.updateTextureRegions(regions, TextureFilter.Nearest, TextureFilter.Nearest, false);
    // No more need for our CPU-based pixmap packer, as our textures are now on GPU
    packer.dispose();
    // Now we can create our fonts...
    fontMap = new FontMap<BitmapFont>();
    int fontCount = 0;
    // for each style...
    for (FontStyle style : FontStyle.values()) {
        // For each size...
        for (FontSize size : FontSize.values()) {
            // get the data for this style/size pair
            BitmapFontData data = dataMap.get(style).get(size);
            // create a BitmapFont from the data and shared texture
            BitmapFont bmFont = new BitmapFont(data, regions, INTEGER);
            // place the font into our map of loaded fonts
            fontMap.get(style).put(size, bmFont);
            fontCount++;
        }
    }
    // for the demo, show how many glyphs we loaded
    return fontCount * CHARACTERS.length();
}
