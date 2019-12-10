private void bindAttributes(ShaderProgram shader, int[] locations) {
    final GL20 gl = Gdx.gl20;
    gl.glBindBuffer(GL20.GL_ARRAY_BUFFER, bufferHandle);
    final int numAttributes = attributes.size();
    if (locations == null) {
        for (int i = 0; i < numAttributes; i++) {
            final VertexAttribute attribute = attributes.get(i);
            final int location = shader.getAttributeLocation(attribute.alias);
            if (location < 0)
                continue;
            shader.enableVertexAttribute(location);
            shader.setVertexAttribute(location, attribute.numComponents, attribute.type, attribute.normalized, attributes.vertexSize, attribute.offset);
        }
    } else {
        for (int i = 0; i < numAttributes; i++) {
            final VertexAttribute attribute = attributes.get(i);
            final int location = locations[i];
            if (location < 0)
                continue;
            shader.enableVertexAttribute(location);
            shader.setVertexAttribute(location, attribute.numComponents, attribute.type, attribute.normalized, attributes.vertexSize, attribute.offset);
        }
    }
}
