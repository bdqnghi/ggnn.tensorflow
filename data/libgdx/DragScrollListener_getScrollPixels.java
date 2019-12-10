float getScrollPixels() {
    return interpolation.apply(minSpeed, maxSpeed, Math.min(1, (System.currentTimeMillis() - startTime) / (float) rampTime));
}
