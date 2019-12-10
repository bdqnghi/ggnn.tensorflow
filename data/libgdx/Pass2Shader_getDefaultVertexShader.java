public static String getDefaultVertexShader() {
    if (defaultVertexShader == null)
        defaultVertexShader = Gdx.files.classpath("com/badlogic/gdx/tests/g3d/shadows/system/classical/pass2.vertex.glsl").readString();
    return defaultVertexShader;
}
