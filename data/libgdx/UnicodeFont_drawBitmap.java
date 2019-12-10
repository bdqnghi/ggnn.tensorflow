private void drawBitmap(String text, int startIndex, int endIndex) {
    BitmapFontData data = bitmapFont.getData();
    int padY = paddingTop + paddingBottom + paddingAdvanceY;
    data.setLineHeight(data.lineHeight + padY);
    layout.setText(bitmapFont, text);
    data.setLineHeight(data.lineHeight - padY);
    for (GlyphRun run : layout.runs) for (int i = 0, n = run.xAdvances.size; i < n; i++) run.xAdvances.incr(i, paddingAdvanceX + paddingLeft + paddingRight);
    cache.setText(layout, paddingLeft, paddingRight);
    Array<TextureRegion> regions = bitmapFont.getRegions();
    for (int i = 0, n = regions.size; i < n; i++) {
        regions.get(i).getTexture().bind();
        GL11.glBegin(GL11.GL_QUADS);
        float[] vertices = cache.getVertices(i);
        for (int ii = 0, nn = vertices.length; ii < nn; ii += 20) {
            GL11.glTexCoord2f(vertices[ii + U], vertices[ii + V]);
            GL11.glVertex3f(vertices[ii + X], vertices[ii + Y], 0);
            GL11.glTexCoord2f(vertices[ii + U], vertices[ii + V2]);
            GL11.glVertex3f(vertices[ii + X], vertices[ii + Y2], 0);
            GL11.glTexCoord2f(vertices[ii + U2], vertices[ii + V2]);
            GL11.glVertex3f(vertices[ii + X2], vertices[ii + Y2], 0);
            GL11.glTexCoord2f(vertices[ii + U2], vertices[ii + V]);
            GL11.glVertex3f(vertices[ii + X2], vertices[ii + Y], 0);
        }
        GL11.glEnd();
    }
}
