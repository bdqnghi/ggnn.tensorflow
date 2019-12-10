private void fillCaches() {
    String text = "This is a TEST\nxahsdhwekjhasd23���$%$%/%&";
    singleLineCache.setColor(0, 0, 1, 1);
    singleLineCache.setText(text, 10.2f, 30.5f);
    multiLineCache.setColor(0, 0, 1, 1);
    multiLineCache.setText(text, 10.5f, 180.5f, 200, Align.center, false);
    singleLineCacheNonInteger.setColor(0, 1, 0, 1);
    singleLineCacheNonInteger.setText(text, 10.2f, 30.5f);
    multiLineCacheNonInteger.setColor(0, 1, 0, 1);
    multiLineCacheNonInteger.setText(text, 10.5f, 180.5f, 200, Align.center, false);
}
