@Override
public void update(int screenWidth, int screenHeight, boolean centerCamera) {
    Vector2 scaled = scaling.apply(getWorldWidth(), getWorldHeight(), screenWidth, screenHeight);
    int viewportWidth = Math.round(scaled.x);
    int viewportHeight = Math.round(scaled.y);
    // Center.
    setScreenBounds((screenWidth - viewportWidth) / 2, (screenHeight - viewportHeight) / 2, viewportWidth, viewportHeight);
    apply(centerCamera);
}
