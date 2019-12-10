@Override
public void unbind(final ShaderProgram shader, final int[] locations) {
    final GL20 gl = Gdx.gl20;
    final int numAttributes = attributes.size();
    if (locations == null) {
        for (int i = 0; i < numAttributes; i++) {
            shader.disableVertexAttribute(attributes.get(i).alias);
        }
    } else {
        for (int i = 0; i < numAttributes; i++) {
            final int location = locations[i];
            if (location >= 0)
                shader.disableVertexAttribute(location);
        }
    }
    gl.glBindBuffer(GL20.GL_ARRAY_BUFFER, 0);
    isBound = false;
}
