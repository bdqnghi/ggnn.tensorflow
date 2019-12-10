private static void enablePointSprites() {
    Gdx.gl.glEnable(GL20.GL_VERTEX_PROGRAM_POINT_SIZE);
    if (Gdx.app.getType() == ApplicationType.Desktop) {
        // GL_POINT_OES
        Gdx.gl.glEnable(0x8861);
    }
    pointSpritesEnabled = true;
}
