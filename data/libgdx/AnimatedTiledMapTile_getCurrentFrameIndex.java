public int getCurrentFrameIndex() {
    int currentTime = (int) (lastTiledMapRenderTime % loopDuration);
    for (int i = 0; i < animationIntervals.length; ++i) {
        int animationInterval = animationIntervals[i];
        if (currentTime <= animationInterval)
            return i;
        currentTime -= animationInterval;
    }
    throw new GdxRuntimeException("Could not determine current animation frame in AnimatedTiledMapTile.  This should never happen.");
}
