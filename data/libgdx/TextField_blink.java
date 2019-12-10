private void blink() {
    if (!Gdx.graphics.isContinuousRendering()) {
        cursorOn = true;
        return;
    }
    long time = TimeUtils.nanoTime();
    if ((time - lastBlink) / 1000000000.0f > blinkTime) {
        cursorOn = !cursorOn;
        lastBlink = time;
    }
}
