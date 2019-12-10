public void setupShaders() {
    ShaderProgram.pedantic = false;
    projTexShader = new ShaderProgram(Gdx.files.internal("data/shaders/projtex-vert.glsl").readString(), Gdx.files.internal("data/shaders/projtex-frag.glsl").readString());
    if (!projTexShader.isCompiled())
        throw new GdxRuntimeException("Couldn't compile shader: " + projTexShader.getLog());
}
