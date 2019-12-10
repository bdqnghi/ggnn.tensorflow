public static Gdx2DPixmap newPixmap(int width, int height, int format) {
    try {
        return new Gdx2DPixmap(width, height, format);
    } catch (IllegalArgumentException e) {
        return null;
    }
}
