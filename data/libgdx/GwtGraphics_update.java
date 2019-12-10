public void update() {
    long currTimeStamp = System.currentTimeMillis();
    deltaTime = (currTimeStamp - lastTimeStamp) / 1000.0f;
    lastTimeStamp = currTimeStamp;
    time += deltaTime;
    frames++;
    if (time > 1) {
        this.fps = frames;
        time = 0;
        frames = 0;
    }
}
