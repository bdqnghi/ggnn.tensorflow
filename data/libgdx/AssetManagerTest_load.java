private void load() {
    // Gdx.app.setLogLevel(Logger.DEBUG);
    start = TimeUtils.nanoTime();
    tex1 = new Texture("data/animation.png");
    tex2 = new TextureAtlas(Gdx.files.internal("data/pack"));
    font2 = new BitmapFont(Gdx.files.internal("data/verdana39.fnt"), false);
    // tex3 = new Texture("data/test.etc1");
    // map = TiledLoader.createMap(Gdx.files.internal("data/tiledmap/tilemap csv.tmx"));
    // atlas = new TileAtlas(map, Gdx.files.internal("data/tiledmap/"));
    // renderer = new TileMapRenderer(map, atlas, 8, 8);
    System.out.println("plain took: " + (TimeUtils.nanoTime() - start) / 1000000000.0f);
    start = TimeUtils.nanoTime();
    manager.load("data/animation.png", Texture.class);
    // manager.load("data/pack1.png", Texture.class);
    manager.load("data/pack", TextureAtlas.class);
    // manager.load("data/verdana39.png", Texture.class);
    manager.load("data/verdana39.fnt", BitmapFont.class);
    // manager.load("data/multipagefont.fnt", BitmapFont.class);
    // manager.load("data/test.etc1", Texture.class);
    // manager.load("data/tiledmap/tilemap csv.tmx", TileMapRenderer.class, new
    // TileMapRendererLoader.TileMapParameter("data/tiledmap/", 8, 8));
    manager.load("data/i18n/message2", I18NBundle.class, new I18NBundleLoader.I18NBundleParameter(reloads % 2 == 0 ? Locale.ITALIAN : Locale.ENGLISH));
}
