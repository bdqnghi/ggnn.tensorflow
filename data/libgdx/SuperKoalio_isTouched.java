private boolean isTouched(float startX, float endX) {
    // startX/endX are given between 0 (left edge of the screen) and 1 (right edge of the screen)
    for (int i = 0; i < 2; i++) {
        float x = Gdx.input.getX(i) / (float) Gdx.graphics.getWidth();
        if (Gdx.input.isTouched(i) && (x >= startX && x <= endX)) {
            return true;
        }
    }
    return false;
}
