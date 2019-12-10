private void swap(TextureRegion region, Array<TextureRegion> src, Array<TextureRegion> dst) {
    int index = src.indexOf(region, true);
    if (index > -1) {
        src.removeIndex(index);
        dst.add(region);
        repaint();
    }
}
