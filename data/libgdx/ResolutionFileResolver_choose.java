static public Resolution choose(Resolution... descriptors) {
    int w = Gdx.graphics.getWidth(), h = Gdx.graphics.getHeight();
    // Prefer the shortest side.
    Resolution best = descriptors[0];
    if (w < h) {
        for (int i = 0, n = descriptors.length; i < n; i++) {
            Resolution other = descriptors[i];
            if (w >= other.portraitWidth && other.portraitWidth >= best.portraitWidth && h >= other.portraitHeight && other.portraitHeight >= best.portraitHeight)
                best = descriptors[i];
        }
    } else {
        for (int i = 0, n = descriptors.length; i < n; i++) {
            Resolution other = descriptors[i];
            if (w >= other.portraitHeight && other.portraitHeight >= best.portraitHeight && h >= other.portraitWidth && other.portraitWidth >= best.portraitWidth)
                best = descriptors[i];
        }
    }
    return best;
}
