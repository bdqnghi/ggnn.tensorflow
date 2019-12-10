public SphericalHarmonics set(float r, float g, float b) {
    for (int idx = 0; idx < data.length; ) {
        data[idx++] = r;
        data[idx++] = g;
        data[idx++] = b;
    }
    return this;
}
