public void setColumn(float x, float y, float z, byte voxel) {
    int ix = (int) x;
    int iy = (int) y;
    int iz = (int) z;
    if (ix < 0 || ix >= voxelsX)
        return;
    if (iy < 0 || iy >= voxelsY)
        return;
    if (iz < 0 || iz >= voxelsZ)
        return;
    // FIXME optimize
    for (; iy > 0; iy--) {
        set(ix, iy, iz, voxel);
    }
}
