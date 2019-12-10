@Override
public void bind(ShaderProgram shader, int[] locations) {
    final GL20 gl = Gdx.gl20;
    gl.glBindBuffer(GL20.GL_ARRAY_BUFFER, bufferHandle);
    if (isDirty) {
        gl.glBufferData(GL20.GL_ARRAY_BUFFER, buffer.limit(), buffer, usage);
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
            if (attribute.usage == Usage.ColorPacked)
                shader.setVertexAttribute(location, attribute.numComponents, GL20.GL_UNSIGNED_BYTE, true, attributes.vertexSize, attribute.offset);
            else
                shader.setVertexAttribute(location, attribute.numComponents, GL20.GL_FLOAT, false, attributes.vertexSize, attribute.offset);
        }
    } else {
        for (int i = 0; i < numAttributes; i++) {
            final VertexAttribute attribute = attributes.get(i);
            final int location = locations[i];
            if (location < 0)
                continue;
            shader.enableVertexAttribute(location);
            if (attribute.usage == Usage.ColorPacked)
                shader.setVertexAttribute(location, attribute.numComponents, GL20.GL_UNSIGNED_BYTE, true, attributes.vertexSize, attribute.offset);
            else
                shader.setVertexAttribute(location, attribute.numComponents, GL20.GL_FLOAT, false, attributes.vertexSize, attribute.offset);
        }
    }
    isBound = true;
}
