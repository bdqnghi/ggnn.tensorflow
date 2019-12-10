/**
 * Called before the rendering of all layers starts.
 */
protected void beginRender() {
    AnimatedTiledMapTile.updateAnimationBaseTime();
    batch.begin();
}
