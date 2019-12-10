public float getHighest(float x, float z) {
    int ix = (int) x;
    int iz = (int) z;
    if (ix < 0 || ix >= voxelsX)
        return 0;
    if (iz < 0 || iz >= voxelsZ)
        return 0;
    // FIXME optimize
    for (int y = voxelsY - 1; y > 0; y--) {
        if (get(ix, y, iz) > 0)
            return y + 1;
    }
    return 0;
}
