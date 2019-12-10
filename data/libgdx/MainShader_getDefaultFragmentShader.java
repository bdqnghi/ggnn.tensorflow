public static String getDefaultFragmentShader() {
    if (defaultFragmentShader == null)
        defaultFragmentShader = Gdx.files.classpath("com/badlogic/gdx/tests/g3d/shadows/system/realistic/main.fragment.glsl").readString();
    return defaultFragmentShader;
}
