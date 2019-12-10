@Override
public void bind(final ShaderProgram shader, final int[] locations) {
    final GL20 gl = Gdx.gl20;
    gl.glBindBuffer(GL20.GL_ARRAY_BUFFER, bufferHandle);
    if (isDirty) {
        byteBuffer.limit(buffer.limit() * 4);
        gl.glBufferData(GL20.GL_ARRAY_BUFFER, byteBuffer.limit(), byteBuffer, usage);
        isDirty = false;
    }
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
    isBound = true;
}
