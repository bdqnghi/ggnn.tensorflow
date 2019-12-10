protected void logManagedCachesStatus() {
    Gdx.app.log(LOG_TAG, Mesh.getManagedStatus());
    Gdx.app.log(LOG_TAG, Texture.getManagedStatus());
    Gdx.app.log(LOG_TAG, Cubemap.getManagedStatus());
    Gdx.app.log(LOG_TAG, ShaderProgram.getManagedStatus());
    Gdx.app.log(LOG_TAG, FrameBuffer.getManagedStatus());
}
