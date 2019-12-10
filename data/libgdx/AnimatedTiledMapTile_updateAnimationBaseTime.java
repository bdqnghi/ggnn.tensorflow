/**
 * Function is called by BatchTiledMapRenderer render(), lastTiledMapRenderTime is used to keep all of the tiles in lock-step
 * animation and avoids having to call TimeUtils.millis() in getTextureRegion()
 */
public static void updateAnimationBaseTime() {
    lastTiledMapRenderTime = TimeUtils.millis() - initialTimeOffset;
}
