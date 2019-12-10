public void setCube(float x, float y, float z, float width, float height, float depth, byte voxel) {
    int ix = (int) x;
    int iy = (int) y;
    int iz = (int) z;
    int iwidth = (int) width;
    int iheight = (int) height;
    int idepth = (int) depth;
    int startX = Math.max(ix, 0);
    int endX = Math.min(voxelsX, ix + iwidth);
    int startY = Math.max(iy, 0);
    int endY = Math.min(voxelsY, iy + iheight);
    int startZ = Math.max(iz, 0);
    int endZ = Math.min(voxelsZ, iz + idepth);
    // FIXME optimize
    for (iy = startY; iy < endY; iy++) {
        for (iz = startZ; iz < endZ; iz++) {
            for (ix = startX; ix < endX; ix++) {
                set(ix, iy, iz, voxel);
            }
        }
    }
}
