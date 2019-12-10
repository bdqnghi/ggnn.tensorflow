public void start(float x, float y, long timeStamp) {
    lastX = x;
    lastY = y;
    deltaX = 0;
    deltaY = 0;
    numSamples = 0;
    for (int i = 0; i < sampleSize; i++) {
        meanX[i] = 0;
        meanY[i] = 0;
        meanTime[i] = 0;
    }
    lastTime = timeStamp;
}
