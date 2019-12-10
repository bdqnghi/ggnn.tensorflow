private void calculateOffsets() {
    int idx = 0;
    for (int y = -1; y <= 1; y++) {
        for (int x = -1; x <= 1; x++) {
            offsets[idx++] = x / (float) Gdx.graphics.getWidth();
            offsets[idx++] = y / (float) Gdx.graphics.getHeight();
        }
    }
    System.out.println(Arrays.toString(offsets));
}
