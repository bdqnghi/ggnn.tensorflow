public static String getDefaultFragmentShader() {
    if (defaultFragmentShader == null)
        defaultFragmentShader = Gdx.files.classpath("com/badlogic/gdx/tests/g3d/shadows/system/realistic/pass1.fragment.glsl").readString();
    return defaultFragmentShader;
}
