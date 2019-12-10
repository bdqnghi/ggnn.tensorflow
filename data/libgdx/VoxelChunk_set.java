public void set(int x, int y, int z, byte voxel) {
    if (x < 0 || x >= width)
        return;
    if (y < 0 || y >= height)
        return;
    if (z < 0 || z >= depth)
        return;
    setFast(x, y, z, voxel);
}
