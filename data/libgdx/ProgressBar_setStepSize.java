public void setStepSize(float stepSize) {
    if (stepSize <= 0)
        throw new IllegalArgumentException("steps must be > 0: " + stepSize);
    this.stepSize = stepSize;
}
