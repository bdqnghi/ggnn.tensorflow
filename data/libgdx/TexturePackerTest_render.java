public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    Settings settings = new Settings();
    settings.fast = false;
    settings.pot = false;
    settings.maxWidth = 1024;
    settings.maxHeight = 1024;
    settings.rotation = false;
    settings.paddingX = 0;
    if (pages == null) {
        Random random = new Random(1243);
        Array<Rect> inputRects = new Array();
        for (int i = 0; i < 240; i++) {
            Rect rect = new Rect();
            rect.name = "rect" + i;
            rect.height = 16 + random.nextInt(120);
            rect.width = 16 + random.nextInt(240);
            inputRects.add(rect);
        }
        for (int i = 0; i < 10; i++) {
            Rect rect = new Rect();
            rect.name = "rect" + (40 + i);
            rect.height = 400 + random.nextInt(340);
            rect.width = 1 + random.nextInt(10);
            inputRects.add(rect);
        }
        long s = System.nanoTime();
        pages = new MaxRectsPacker(settings).pack(inputRects);
        long e = System.nanoTime();
        System.out.println("fast: " + settings.fast);
        System.out.println((e - s) / 1e6f + " ms");
        System.out.println();
    }
    int x = 20, y = 20;
    for (Page page : pages) {
        renderer.setColor(Color.GRAY);
        renderer.begin(ShapeType.Filled);
        for (int i = 0; i < page.outputRects.size; i++) {
            Rect rect = page.outputRects.get(i);
            renderer.rect(x + rect.x + settings.paddingX, y + rect.y + settings.paddingY, rect.width - settings.paddingX, rect.height - settings.paddingY);
        }
        renderer.end();
        renderer.setColor(Color.RED);
        renderer.begin(ShapeType.Line);
        for (int i = 0; i < page.outputRects.size; i++) {
            Rect rect = page.outputRects.get(i);
            renderer.rect(x + rect.x + settings.paddingX, y + rect.y + settings.paddingY, rect.width - settings.paddingX, rect.height - settings.paddingY);
        }
        renderer.setColor(Color.GREEN);
        renderer.rect(x, y, page.width + settings.paddingX * 2, page.height + settings.paddingY * 2);
        renderer.end();
        x += page.width + 20;
    }
}
