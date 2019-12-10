void updateTime() {
    long thisTime = System.nanoTime();
    deltaTime = (thisTime - lastTime) / 1000000000.0f;
    lastTime = thisTime;
}
