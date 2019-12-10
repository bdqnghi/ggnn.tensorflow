@Override
public void render(int[] layers) {
    if (!cached) {
        cached = true;
        count = 0;
        spriteCache.clear();
        final float extraWidth = viewBounds.width * overCache;
        final float extraHeight = viewBounds.height * overCache;
        cacheBounds.x = viewBounds.x - extraWidth;
        cacheBounds.y = viewBounds.y - extraHeight;
        cacheBounds.width = viewBounds.width + extraWidth * 2;
        cacheBounds.height = viewBounds.height + extraHeight * 2;
        for (MapLayer layer : map.getLayers()) {
            spriteCache.beginCache();
            if (layer instanceof TiledMapTileLayer) {
                renderTileLayer((TiledMapTileLayer) layer);
            } else if (layer instanceof TiledMapImageLayer) {
                renderImageLayer((TiledMapImageLayer) layer);
            }
            spriteCache.endCache();
        }
    }
    if (blending) {
        Gdx.gl.glEnable(GL20.GL_BLEND);
        Gdx.gl.glBlendFunc(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
    }
    spriteCache.begin();
    MapLayers mapLayers = map.getLayers();
    for (int i : layers) {
        MapLayer layer = mapLayers.get(i);
        if (layer.isVisible()) {
            spriteCache.draw(i);
            renderObjects(layer);
        }
    }
    spriteCache.end();
    if (blending)
        Gdx.gl.glDisable(GL20.GL_BLEND);
}
