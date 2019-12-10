public void update(float x, float y, long timeStamp) {
    long currTime = timeStamp;
    deltaX = x - lastX;
    deltaY = y - lastY;
    lastX = x;
    lastY = y;
    long deltaTime = currTime - lastTime;
    lastTime = currTime;
    int index = numSamples % sampleSize;
    meanX[index] = deltaX;
    meanY[index] = deltaY;
    meanTime[index] = deltaTime;
    numSamples++;
}
