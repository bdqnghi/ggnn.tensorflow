@Override
public void render() {
    // red.a = (red.a + Gdx.graphics.getDeltaTime() * 0.1f) % 1;
    int viewHeight = Gdx.graphics.getHeight();
    Gdx.gl.glClearColor(0, 0, 0, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    // Test wrapping or truncation with the font directly.
    if (!true) {
        // BitmapFont font = label.getStyle().font;
        BitmapFont font = this.font;
        font.getRegion().getTexture().setFilter(TextureFilter.Nearest, TextureFilter.Nearest);
        font.getData().setScale(2f);
        renderer.begin(ShapeRenderer.ShapeType.Line);
        renderer.setColor(0, 1, 0, 1);
        float w = Gdx.input.getX();
        // w = 855;
        renderer.rect(10, 10, w, 500);
        renderer.end();
        spriteBatch.begin();
        String text = "your new";
        text = "How quickly [RED]daft jumping zebras vex.";
        // text = "Another font wrap is-sue, this time with    multiple whitespace characters.";
        text = "test with AGWlWi      AGWlWi issue";
        if (true) {
            // Test wrap.
            layout.setText(font, text, 0, text.length(), font.getColor(), w, Align.center, true, null);
        } else {
            // Test truncation.
            layout.setText(font, text, 0, text.length(), font.getColor(), w, Align.center, false, "...");
        }
        float meowy = (500 / 2 + layout.height / 2 + 5);
        font.draw(spriteBatch, layout, 10, 10 + meowy);
        spriteBatch.end();
        renderer.begin(ShapeRenderer.ShapeType.Line);
        renderer.setColor(0, 1, 0, 1);
        for (int i = 0, n = layout.runs.size; i < n; i++) {
            GlyphRun r = layout.runs.get(i);
            renderer.rect(10 + r.x, 10 + meowy + r.y, r.width, -font.getLineHeight());
        }
        renderer.end();
        font.getData().setScale(1f);
        return;
    }
    // Test wrapping with label.
    if (false) {
        label.debug();
        label.getStyle().font = font;
        label.setStyle(label.getStyle());
        label.setText("How quickly [RED]daft[] jumping zebras vex.");
        label.setWrap(true);
        // label.setEllipsis(true);
        label.setAlignment(Align.center, Align.right);
        label.setWidth(Gdx.input.getX() - label.getX());
        label.setHeight(label.getPrefHeight());
    } else {
        // Test various font features.
        spriteBatch.begin();
        String text = "Sphinx of black quartz, judge my vow.";
        font.setColor(Color.RED);
        float x = 100, y = 20;
        float alignmentWidth;
        if (false) {
            alignmentWidth = 0;
            font.draw(spriteBatch, text, x, viewHeight - y, alignmentWidth, Align.right, false);
        }
        if (true) {
            alignmentWidth = 280;
            font.draw(spriteBatch, text, x, viewHeight - y, alignmentWidth, Align.right, true);
        }
        font.draw(spriteBatch, "[", 50, 60, 100, Align.left, true);
        font.getData().markupEnabled = true;
        font.draw(spriteBatch, "[", 100, 60, 100, Align.left, true);
        font.getData().markupEnabled = false;
        // 'R' and 'p' are in different pages
        String txt2 = "this font uses " + multiPageFont.getRegions().size + " texture pages: RpRpRpRpRpNM";
        spriteBatch.renderCalls = 0;
        // regular draw function
        multiPageFont.setColor(Color.BLUE);
        multiPageFont.draw(spriteBatch, txt2, 10, 100);
        // expert usage.. drawing with bitmap font cache
        BitmapFontCache cache = multiPageFont.getCache();
        cache.clear();
        cache.setColor(Color.BLACK);
        cache.setText(txt2, 10, 50);
        cache.setColors(Color.PINK, 3, 6);
        cache.setColors(Color.ORANGE, 9, 12);
        cache.setColors(Color.GREEN, 16, txt2.length());
        cache.draw(spriteBatch, 5, txt2.length() - 5);
        cache.clear();
        cache.setColor(Color.BLACK);
        float textX = 10;
        textX += cache.setText("[black] ", textX, 150).width;
        multiPageFont.getData().markupEnabled = true;
        textX += cache.addText("[[[PINK]pink[]] ", textX, 150).width;
        textX += cache.addText("[PERU][[peru] ", textX, 150).width;
        cache.setColor(Color.GREEN);
        textX += cache.addText("green ", textX, 150).width;
        textX += cache.addText("[#A52A2A]br[#A52A2ADF]ow[#A52A2ABF]n f[#A52A2A9F]ad[#A52A2A7F]in[#A52A2A5F]g o[#A52A2A3F]ut ", textX, 150).width;
        multiPageFont.getData().markupEnabled = false;
        cache.draw(spriteBatch);
        // tinting
        cache.tint(new Color(1f, 1f, 1f, 0.3f));
        cache.translate(0f, 40f);
        cache.draw(spriteBatch);
        spriteBatch.end();
        // System.out.println(spriteBatch.renderCalls);
        renderer.begin(ShapeType.Line);
        renderer.setColor(Color.BLACK);
        renderer.rect(x, viewHeight - y - 200, alignmentWidth, 200);
        renderer.end();
    }
    stage.act(Gdx.graphics.getDeltaTime());
    stage.draw();
}
