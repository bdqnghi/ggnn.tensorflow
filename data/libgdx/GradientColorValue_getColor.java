public void getColor(float percent, float[] out, int index) {
    int startIndex = 0, endIndex = -1;
    float[] timeline = this.timeline;
    int n = timeline.length;
    for (int i = 1; i < n; i++) {
        float t = timeline[i];
        if (t > percent) {
            endIndex = i;
            break;
        }
        startIndex = i;
    }
    float startTime = timeline[startIndex];
    startIndex *= 3;
    float r1 = colors[startIndex];
    float g1 = colors[startIndex + 1];
    float b1 = colors[startIndex + 2];
    if (endIndex == -1) {
        out[index] = r1;
        out[index + 1] = g1;
        out[index + 2] = b1;
        return;
    }
    float factor = (percent - startTime) / (timeline[endIndex] - startTime);
    endIndex *= 3;
    out[index] = r1 + (colors[endIndex] - r1) * factor;
    out[index + 1] = g1 + (colors[endIndex + 1] - g1) * factor;
    out[index + 2] = b1 + (colors[endIndex + 2] - b1) * factor;
}
