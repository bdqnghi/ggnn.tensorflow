/**
 * Generates a new {@link BitmapFontData} instance, expert usage only. Throws a GdxRuntimeException if something went wrong.
 * @param parameter configures how the font is generated
 */
public FreeTypeBitmapFontData generateData(FreeTypeFontParameter parameter, FreeTypeBitmapFontData data) {
    parameter = parameter == null ? new FreeTypeFontParameter() : parameter;
    char[] characters = parameter.characters.toCharArray();
    int charactersLength = characters.length;
    boolean incremental = parameter.incremental;
    setPixelSizes(0, parameter.size);
    // set general font data
    SizeMetrics fontMetrics = face.getSize().getMetrics();
    data.flipped = parameter.flip;
    data.ascent = FreeType.toInt(fontMetrics.getAscender());
    data.descent = FreeType.toInt(fontMetrics.getDescender());
    data.lineHeight = FreeType.toInt(fontMetrics.getHeight());
    float baseLine = data.ascent;
    // if bitmapped
    if (bitmapped && (data.lineHeight == 0)) {
        for (int c = 32; c < (32 + face.getNumGlyphs()); c++) {
            if (loadChar(c)) {
                int lh = FreeType.toInt(face.getGlyph().getMetrics().getHeight());
                data.lineHeight = (lh > data.lineHeight) ? lh : data.lineHeight;
            }
        }
    }
    data.lineHeight += parameter.spaceY;
    // determine space width
    if (loadChar(' ') || loadChar('l')) {
        data.spaceWidth = FreeType.toInt(face.getGlyph().getMetrics().getHoriAdvance());
    } else {
        // Possibly very wrong.
        data.spaceWidth = face.getMaxAdvanceWidth();
    }
    // determine x-height
    for (char xChar : data.xChars) {
        if (!loadChar(xChar))
            continue;
        data.xHeight = FreeType.toInt(face.getGlyph().getMetrics().getHeight());
        break;
    }
    if (data.xHeight == 0)
        throw new GdxRuntimeException("No x-height character found in font");
    // determine cap height
    for (char capChar : data.capChars) {
        if (!loadChar(capChar))
            continue;
        data.capHeight = FreeType.toInt(face.getGlyph().getMetrics().getHeight());
        break;
    }
    if (!bitmapped && data.capHeight == 1)
        throw new GdxRuntimeException("No cap character found in font");
    data.ascent -= data.capHeight;
    data.down = -data.lineHeight;
    if (parameter.flip) {
        data.ascent = -data.ascent;
        data.down = -data.down;
    }
    boolean ownsAtlas = false;
    PixmapPacker packer = parameter.packer;
    if (packer == null) {
        // Create a packer.
        int size;
        PackStrategy packStrategy;
        if (incremental) {
            size = maxTextureSize;
            packStrategy = new GuillotineStrategy();
        } else {
            int maxGlyphHeight = (int) Math.ceil(data.lineHeight);
            size = MathUtils.nextPowerOfTwo((int) Math.sqrt(maxGlyphHeight * maxGlyphHeight * charactersLength));
            if (maxTextureSize > 0)
                size = Math.min(size, maxTextureSize);
            packStrategy = new SkylineStrategy();
        }
        ownsAtlas = true;
        packer = new PixmapPacker(size, size, Format.RGBA8888, 1, false, packStrategy);
    }
    if (incremental)
        data.glyphs = new Array(charactersLength + 32);
    Stroker stroker = null;
    if (parameter.borderWidth > 0) {
        stroker = library.createStroker();
        stroker.set((int) (parameter.borderWidth * 64f), parameter.borderStraight ? FreeType.FT_STROKER_LINECAP_BUTT : FreeType.FT_STROKER_LINECAP_ROUND, parameter.borderStraight ? FreeType.FT_STROKER_LINEJOIN_MITER_FIXED : FreeType.FT_STROKER_LINEJOIN_ROUND, 0);
    }
    // Create glyphs largest height first for best packing.
    int[] heights = new int[charactersLength];
    for (int i = 0, n = charactersLength; i < n; i++) {
        int height = loadChar(characters[i]) ? FreeType.toInt(face.getGlyph().getMetrics().getHeight()) : 0;
        heights[i] = height;
    }
    int heightsCount = heights.length;
    while (heightsCount > 0) {
        int best = 0, maxHeight = heights[0];
        for (int i = 1; i < heightsCount; i++) {
            int height = heights[i];
            if (height > maxHeight) {
                maxHeight = height;
                best = i;
            }
        }
        char c = characters[best];
        Glyph glyph = createGlyph(c, data, parameter, stroker, baseLine, packer);
        if (glyph != null) {
            data.setGlyph(c, glyph);
            if (incremental)
                data.glyphs.add(glyph);
        }
        heightsCount--;
        heights[best] = heights[heightsCount];
        characters[best] = characters[heightsCount];
    }
    if (stroker != null && !incremental)
        stroker.dispose();
    data.missingGlyph = data.getGlyph('\u0000');
    if (incremental) {
        data.generator = this;
        data.parameter = parameter;
        data.stroker = stroker;
        data.packer = packer;
    }
    // Generate kerning.
    parameter.kerning &= face.hasKerning();
    if (parameter.kerning) {
        for (int i = 0; i < charactersLength; i++) {
            char firstChar = characters[i];
            Glyph first = data.getGlyph(firstChar);
            if (first == null)
                continue;
            int firstIndex = face.getCharIndex(firstChar);
            for (int ii = i; ii < charactersLength; ii++) {
                char secondChar = characters[ii];
                Glyph second = data.getGlyph(secondChar);
                if (second == null)
                    continue;
                int secondIndex = face.getCharIndex(secondChar);
                int kerning = face.getKerning(firstIndex, secondIndex, 0);
                if (kerning != 0)
                    first.setKerning(secondChar, FreeType.toInt(kerning));
                kerning = face.getKerning(secondIndex, firstIndex, 0);
                if (kerning != 0)
                    second.setKerning(firstChar, FreeType.toInt(kerning));
            }
        }
    }
    // Generate texture regions.
    if (ownsAtlas) {
        data.regions = new Array();
        packer.updateTextureRegions(data.regions, parameter.minFilter, parameter.magFilter, parameter.genMipMaps);
    }
    // Set space glyph.
    Glyph spaceGlyph = data.getGlyph(' ');
    if (spaceGlyph == null) {
        spaceGlyph = new Glyph();
        spaceGlyph.xadvance = (int) data.spaceWidth + parameter.spaceX;
        spaceGlyph.id = (int) ' ';
        data.setGlyph(' ', spaceGlyph);
    }
    if (spaceGlyph.width == 0)
        spaceGlyph.width = (int) (spaceGlyph.xadvance + data.padRight);
    return data;
}
