public byte getFast(int x, int y, int z) {
    return voxels[x + z * width + y * widthTimesHeight];
}
