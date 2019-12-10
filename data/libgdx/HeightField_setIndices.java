private void setIndices() {
    final int w = width - 1;
    final int h = height - 1;
    short[] indices = new short[w * h * 6];
    int i = -1;
    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            final int c00 = smooth ? (y * width + x) : (y * 2 * w + x * 2);
            final int c10 = c00 + 1;
            final int c01 = c00 + (smooth ? width : w * 2);
            final int c11 = c10 + (smooth ? width : w * 2);
            indices[++i] = (short) c11;
            indices[++i] = (short) c10;
            indices[++i] = (short) c00;
            indices[++i] = (short) c00;
            indices[++i] = (short) c01;
            indices[++i] = (short) c11;
        }
    }
    mesh.setIndices(indices);
}
