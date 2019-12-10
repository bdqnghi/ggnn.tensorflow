public static String getDefaultVertexShader() {
    if (defaultVertexShader == null)
        defaultVertexShader = Gdx.files.classpath("com/badlogic/gdx/tests/g3d/shadows/system/realistic/pass1.vertex.glsl").readString();
    return defaultVertexShader;
}
