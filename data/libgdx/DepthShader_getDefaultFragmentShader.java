public final static String getDefaultFragmentShader() {
    if (defaultFragmentShader == null)
        defaultFragmentShader = Gdx.files.classpath("com/badlogic/gdx/graphics/g3d/shaders/depth.fragment.glsl").readString();
    return defaultFragmentShader;
}
