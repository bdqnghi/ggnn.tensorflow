public void render() {
    if (Gdx.input.justTouched()) {
        for (int i = 0; i < 10; i++) {
            if (font != null) {
                font.dispose();
            }
            FileHandle fontFile = Gdx.files.internal("data/arial.ttf");
            FreeTypeFontGenerator generator = new FreeTypeFontGenerator(fontFile);
            FreeTypeFontParameter parameter = new FreeTypeFontParameter();
            parameter.size = 15;
            font = generator.generateFont(parameter);
            generator.dispose();
        }
        for (int i = 0; i < 10; i++) System.gc();
        Gdx.app.log("FreeTypeDisposeTest", "generated 10 fonts");
        Gdx.app.log("FreeTypeDisposeTest", Gdx.app.getJavaHeap() + ", " + Gdx.app.getNativeHeap());
    }
}
