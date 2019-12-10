public static String getDefaultVertexShader() {
    if (defaultVertexShader == null)
        defaultVertexShader = Gdx.files.classpath("com/badlogic/gdx/graphics/g3d/particles/particles.vertex.glsl").readString();
    return defaultVertexShader;
}
