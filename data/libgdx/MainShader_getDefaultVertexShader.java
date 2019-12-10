public static String getDefaultVertexShader() {
    if (defaultVertexShader == null)
        defaultVertexShader = Gdx.files.classpath("com/badlogic/gdx/tests/g3d/shadows/system/realistic/main.vertex.glsl").readString();
    return defaultVertexShader;
}
