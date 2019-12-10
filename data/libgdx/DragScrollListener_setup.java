public void setup(float minSpeedPixels, float maxSpeedPixels, float tickSecs, float rampSecs) {
    this.minSpeed = minSpeedPixels;
    this.maxSpeed = maxSpeedPixels;
    this.tickSecs = tickSecs;
    rampTime = (long) (rampSecs * 1000);
}
