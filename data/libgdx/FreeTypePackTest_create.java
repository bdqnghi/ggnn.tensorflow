@Override
public void create() {
    camera = new OrthographicCamera();
    batch = new SpriteBatch();
    long start = System.currentTimeMillis();
    int glyphCount = createFonts();
    long time = System.currentTimeMillis() - start;
    text = glyphCount + " glyphs packed in " + regions.size + " page(s) in " + time + " ms";
}
