void updateTime() {
    long time = System.nanoTime();
    deltaTime = (time - lastTime) / 1000000000.0f;
    lastTime = time;
    if (time - frameStart >= 1000000000) {
        fps = frames;
        frames = 0;
        frameStart = time;
    }
    frames++;
}
