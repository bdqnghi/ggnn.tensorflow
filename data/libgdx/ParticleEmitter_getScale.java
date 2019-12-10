public float getScale(float percent) {
    int endIndex = -1;
    float[] timeline = this.timeline;
    int n = timeline.length;
    for (int i = 1; i < n; i++) {
        float t = timeline[i];
        if (t > percent) {
            endIndex = i;
            break;
        }
    }
    if (endIndex == -1)
        return scaling[n - 1];
    float[] scaling = this.scaling;
    int startIndex = endIndex - 1;
    float startValue = scaling[startIndex];
    float startTime = timeline[startIndex];
    return startValue + (scaling[endIndex] - startValue) * ((percent - startTime) / (timeline[endIndex] - startTime));
}
