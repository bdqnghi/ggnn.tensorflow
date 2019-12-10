protected int letterUnderCursor(float x) {
    x -= renderOffset + textOffset;
    int index = glyphPositions.size - 1;
    float[] glyphPositions = this.glyphPositions.items;
    for (int i = 0, n = this.glyphPositions.size; i < n; i++) {
        if (glyphPositions[i] > x) {
            index = i - 1;
            break;
        }
    }
    return Math.max(0, index);
}
