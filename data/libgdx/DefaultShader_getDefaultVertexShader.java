public static String getDefaultVertexShader() {
    if (defaultVertexShader == null)
        defaultVertexShader = Gdx.files.classpath("com/badlogic/gdx/graphics/g3d/shaders/default.vertex.glsl").readString();
    return defaultVertexShader;
}
