protected void endPass1() {
    allocator.end();
    Gdx.gl.glDisable(GL20.GL_SCISSOR_TEST);
}
