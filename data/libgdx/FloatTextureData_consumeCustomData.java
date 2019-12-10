@Override
public void consumeCustomData(int target) {
    if (Gdx.app.getType() == ApplicationType.Android || Gdx.app.getType() == ApplicationType.iOS || Gdx.app.getType() == ApplicationType.WebGL) {
        if (!Gdx.graphics.supportsExtension("OES_texture_float"))
            throw new GdxRuntimeException("Extension OES_texture_float not supported!");
        // GLES and WebGL defines texture format by 3rd and 8th argument,
        // so to get a float texture one needs to supply GL_RGBA and GL_FLOAT there.
        Gdx.gl.glTexImage2D(target, 0, GL20.GL_RGBA, width, height, 0, GL20.GL_RGBA, GL20.GL_FLOAT, buffer);
    } else {
        if (!Gdx.graphics.supportsExtension("GL_ARB_texture_float"))
            throw new GdxRuntimeException("Extension GL_ARB_texture_float not supported!");
        // this is a const from GL 3.0, used only on desktops
        final int GL_RGBA32F = 34836;
        // in desktop OpenGL the texture format is defined only by the third argument,
        // hence we need to use GL_RGBA32F there (this constant is unavailable in GLES/WebGL)
        Gdx.gl.glTexImage2D(target, 0, GL_RGBA32F, width, height, 0, GL20.GL_RGBA, GL20.GL_FLOAT, buffer);
    }
}
