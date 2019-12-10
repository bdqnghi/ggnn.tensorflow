@Override
public void render(int[] layers) {
    beginRender();
    for (int layerIdx : layers) {
        MapLayer layer = map.getLayers().get(layerIdx);
        if (layer.isVisible()) {
            if (layer instanceof TiledMapTileLayer) {
                renderTileLayer((TiledMapTileLayer) layer);
            } else if (layer instanceof TiledMapImageLayer) {
                renderImageLayer((TiledMapImageLayer) layer);
            } else {
                renderObjects(layer);
            }
        }
    }
    endRender();
}
