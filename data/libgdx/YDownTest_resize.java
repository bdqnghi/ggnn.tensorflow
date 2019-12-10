@Override
public void resize(int width, int height) {
    // handling resizing is simple, just set the camera to ortho again
    camera.setToOrtho(true, width, height);
}
