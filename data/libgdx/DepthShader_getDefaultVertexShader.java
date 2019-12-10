public final static String getDefaultVertexShader() {
    if (defaultVertexShader == null)
        defaultVertexShader = Gdx.files.classpath("com/badlogic/gdx/graphics/g3d/shaders/depth.vertex.glsl").readString();
    return defaultVertexShader;
}
