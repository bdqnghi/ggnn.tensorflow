public byte get(int x, int y, int z) {
    if (x < 0 || x >= width)
        return 0;
    if (y < 0 || y >= height)
        return 0;
    if (z < 0 || z >= depth)
        return 0;
    return getFast(x, y, z);
}
