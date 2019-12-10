public float getPercentComplete() {
    if (delayTimer < delay)
        return 0;
    return Math.min(1, durationTimer / (float) duration);
}
