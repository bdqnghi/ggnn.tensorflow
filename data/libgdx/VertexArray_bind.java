@Override
public void bind(final ShaderProgram shader, final int[] locations) {
    final int numAttributes = attributes.size();
    byteBuffer.limit(buffer.limit() * 4);
    if (locations == null) {
        for (int i = 0; i < numAttributes; i++) {
            final VertexAttribute attribute = attributes.get(i);
            final int location = shader.getAttributeLocation(attribute.alias);
            if (location < 0)
                continue;
            shader.enableVertexAttribute(location);
            if (attribute.type == GL20.GL_FLOAT) {
                buffer.position(attribute.offset / 4);
                shader.setVertexAttribute(location, attribute.numComponents, attribute.type, attribute.normalized, attributes.vertexSize, buffer);
            } else {
                byteBuffer.position(attribute.offset);
                shader.setVertexAttribute(location, attribute.numComponents, attribute.type, attribute.normalized, attributes.vertexSize, byteBuffer);
            }
        }
    } else {
        for (int i = 0; i < numAttributes; i++) {
            final VertexAttribute attribute = attributes.get(i);
            final int location = locations[i];
            if (location < 0)
                continue;
            shader.enableVertexAttribute(location);
            if (attribute.type == GL20.GL_FLOAT) {
                buffer.position(attribute.offset / 4);
                shader.setVertexAttribute(location, attribute.numComponents, attribute.type, attribute.normalized, attributes.vertexSize, buffer);
            } else {
                byteBuffer.position(attribute.offset);
                shader.setVertexAttribute(location, attribute.numComponents, attribute.type, attribute.normalized, attributes.vertexSize, byteBuffer);
            }
        }
    }
    isBound = true;
}
