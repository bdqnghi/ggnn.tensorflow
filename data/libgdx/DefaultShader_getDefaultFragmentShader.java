public static String getDefaultFragmentShader() {
    if (defaultFragmentShader == null)
        defaultFragmentShader = Gdx.files.classpath("com/badlogic/gdx/graphics/g3d/shaders/default.fragment.glsl").readString();
    return defaultFragmentShader;
}
