public float getScale(float percent) {
    int endIndex = -1;
    int n = timeline.length;
    // return scaling[n - 1];
    for (int i = 1; i < n; i++) {
        float t = timeline[i];
        if (t > percent) {
            endIndex = i;
            break;
        }
    }
    if (endIndex == -1)
        return scaling[n - 1];
    int startIndex = endIndex - 1;
    float startValue = scaling[startIndex];
    float startTime = timeline[startIndex];
    return startValue + (scaling[endIndex] - startValue) * ((percent - startTime) / (timeline[endIndex] - startTime));
}
