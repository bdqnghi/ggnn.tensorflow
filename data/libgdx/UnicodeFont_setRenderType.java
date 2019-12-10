public void setRenderType(RenderType renderType) {
    this.renderType = renderType;
    if (renderType != RenderType.FreeType) {
        if (bitmapFont != null) {
            bitmapFont.dispose();
            generator.dispose();
        }
    } else {
        String fontFile = getFontFile();
        if (fontFile != null) {
            generator = new FreeTypeFontGenerator(Gdx.files.absolute(fontFile));
            FreeTypeFontParameter param = new FreeTypeFontParameter();
            param.size = font.getSize();
            param.incremental = true;
            param.flip = true;
            param.mono = mono;
            param.gamma = gamma;
            bitmapFont = generator.generateFont(param);
            if (bitmapFont.getData().missingGlyph == null)
                bitmapFont.getData().missingGlyph = bitmapFont.getData().getGlyph('\ufffd');
            cache = bitmapFont.newFontCache();
            layout = new GlyphLayout();
        }
    }
}
