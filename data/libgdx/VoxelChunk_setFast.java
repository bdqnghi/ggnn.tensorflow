public void setFast(int x, int y, int z, byte voxel) {
    voxels[x + z * width + y * widthTimesHeight] = voxel;
}
