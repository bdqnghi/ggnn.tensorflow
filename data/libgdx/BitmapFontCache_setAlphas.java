/**
 * Sets the alpha component of all text currently in the cache. Does not affect subsequently added text.
 */
public void setAlphas(float alpha) {
    int alphaBits = ((int) (254 * alpha)) << 24;
    float prev = 0, newColor = 0;
    for (int j = 0, length = pageVertices.length; j < length; j++) {
        float[] vertices = pageVertices[j];
        for (int i = 2, n = idx[j]; i < n; i += 5) {
            float c = vertices[i];
            if (c == prev && i != 2) {
                vertices[i] = newColor;
            } else {
                prev = c;
                int rgba = NumberUtils.floatToIntColor(c);
                rgba = (rgba & 0x00FFFFFF) | alphaBits;
                newColor = NumberUtils.intToFloatColor(rgba);
                vertices[i] = newColor;
            }
        }
    }
}
