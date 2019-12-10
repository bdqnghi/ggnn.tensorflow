public float getVelocityY() {
    float meanY = getAverage(this.meanY, numSamples);
    float meanTime = getAverage(this.meanTime, numSamples) / 1000000000.0f;
    if (meanTime == 0)
        return 0;
    return meanY / meanTime;
}
