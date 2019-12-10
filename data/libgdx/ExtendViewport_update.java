@Override
public void update(int screenWidth, int screenHeight, boolean centerCamera) {
    // Fit min size to the screen.
    float worldWidth = minWorldWidth;
    float worldHeight = minWorldHeight;
    Vector2 scaled = Scaling.fit.apply(worldWidth, worldHeight, screenWidth, screenHeight);
    // Extend in the short direction.
    int viewportWidth = Math.round(scaled.x);
    int viewportHeight = Math.round(scaled.y);
    if (viewportWidth < screenWidth) {
        float toViewportSpace = viewportHeight / worldHeight;
        float toWorldSpace = worldHeight / viewportHeight;
        float lengthen = (screenWidth - viewportWidth) * toWorldSpace;
        if (maxWorldWidth > 0)
            lengthen = Math.min(lengthen, maxWorldWidth - minWorldWidth);
        worldWidth += lengthen;
        viewportWidth += Math.round(lengthen * toViewportSpace);
    } else if (viewportHeight < screenHeight) {
        float toViewportSpace = viewportWidth / worldWidth;
        float toWorldSpace = worldWidth / viewportWidth;
        float lengthen = (screenHeight - viewportHeight) * toWorldSpace;
        if (maxWorldHeight > 0)
            lengthen = Math.min(lengthen, maxWorldHeight - minWorldHeight);
        worldHeight += lengthen;
        viewportHeight += Math.round(lengthen * toViewportSpace);
    }
    setWorldSize(worldWidth, worldHeight);
    // Center.
    setScreenBounds((screenWidth - viewportWidth) / 2, (screenHeight - viewportHeight) / 2, viewportWidth, viewportHeight);
    apply(centerCamera);
}
