public float getVelocityX() {
    float meanX = getAverage(this.meanX, numSamples);
    float meanTime = getAverage(this.meanTime, numSamples) / 1000000000.0f;
    if (meanTime == 0)
        return 0;
    return meanX / meanTime;
}
