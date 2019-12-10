@Override
public boolean fling(float velocityX, float velocityY, int button) {
    Gdx.app.log("GestureDetectorTest", "fling " + velocityX + ", " + velocityY);
    flinging = true;
    velX = camera.zoom * velocityX * 0.5f;
    velY = camera.zoom * velocityY * 0.5f;
    return false;
}
