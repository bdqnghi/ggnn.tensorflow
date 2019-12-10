public void render() {
    int viewWidth = Gdx.graphics.getWidth();
    int viewHeight = Gdx.graphics.getHeight();
    if (sampleTextRadio.isSelected()) {
        GL11.glClearColor(renderingBackgroundColor.r, renderingBackgroundColor.g, renderingBackgroundColor.b, renderingBackgroundColor.a);
        GL11.glClear(GL11.GL_COLOR_BUFFER_BIT);
    } else {
        GL11.glClearColor(1, 1, 1, 1);
        GL11.glClear(GL11.GL_COLOR_BUFFER_BIT);
    }
    String sampleText = sampleTextPane.getText();
    glEnable(GL_TEXTURE_2D);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glViewport(0, 0, width, height);
    glScissor(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, width, height, 0, 1, -1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    unicodeFont.addGlyphs(sampleText);
    if (!unicodeFont.getEffects().isEmpty() && unicodeFont.loadGlyphs(64)) {
        glyphPageComboModel.removeAllElements();
        int pageCount = unicodeFont.getGlyphPages().size();
        int glyphCount = 0;
        for (int i = 0; i < pageCount; i++) {
            glyphPageComboModel.addElement("Page " + (i + 1));
            glyphCount += ((GlyphPage) unicodeFont.getGlyphPages().get(i)).getGlyphs().size();
        }
        glyphPagesTotalLabel.setText(String.valueOf(pageCount));
        glyphsTotalLabel.setText(String.valueOf(glyphCount));
    }
    if (sampleTextRadio.isSelected()) {
        int offset = unicodeFont.getYOffset(sampleText);
        if (offset > 0)
            offset = 0;
        unicodeFont.drawString(10, 12, sampleText, Color.WHITE, 0, sampleText.length());
    } else {
        // GL11.glColor4f(renderingBackgroundColor.r, renderingBackgroundColor.g, renderingBackgroundColor.b,
        // renderingBackgroundColor.a);
        // fillRect(0, 0, unicodeFont.getGlyphPageWidth() + 2, unicodeFont.getGlyphPageHeight() + 2);
        int index = glyphPageCombo.getSelectedIndex();
        List pages = unicodeFont.getGlyphPages();
        if (index >= 0 && index < pages.size()) {
            Texture texture = ((GlyphPage) pages.get(glyphPageCombo.getSelectedIndex())).getTexture();
            glDisable(GL_TEXTURE_2D);
            glColor4f(renderingBackgroundColor.r, renderingBackgroundColor.g, renderingBackgroundColor.b, renderingBackgroundColor.a);
            glBegin(GL_QUADS);
            glVertex3f(0, 0, 0);
            glVertex3f(0, texture.getHeight(), 0);
            glVertex3f(texture.getWidth(), texture.getHeight(), 0);
            glVertex3f(texture.getWidth(), 0, 0);
            glEnd();
            glEnable(GL_TEXTURE_2D);
            texture.bind();
            glColor4f(1, 1, 1, 1);
            glBegin(GL_QUADS);
            glTexCoord2f(0, 0);
            glVertex3f(0, 0, 0);
            glTexCoord2f(0, 1);
            glVertex3f(0, texture.getHeight(), 0);
            glTexCoord2f(1, 1);
            glVertex3f(texture.getWidth(), texture.getHeight(), 0);
            glTexCoord2f(1, 0);
            glVertex3f(texture.getWidth(), 0, 0);
            glEnd();
        }
    }
    glDisable(GL_TEXTURE_2D);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    if (saveBmFontFile != null) {
        try {
            BMFontUtil bmFont = new BMFontUtil(unicodeFont);
            bmFont.save(saveBmFontFile);
            if (batchMode) {
                exit(0);
            }
        } catch (Throwable ex) {
            System.out.println("Error saving BMFont files: " + saveBmFontFile.getAbsolutePath());
            ex.printStackTrace();
        } finally {
            saveBmFontFile = null;
        }
    }
}
