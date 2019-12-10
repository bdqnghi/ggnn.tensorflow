@Override
public void update(int screenWidth, int screenHeight, boolean centerCamera) {
    setScreenBounds(0, 0, screenWidth, screenHeight);
    setWorldSize(screenWidth * unitsPerPixel, screenHeight * unitsPerPixel);
    apply(centerCamera);
}
