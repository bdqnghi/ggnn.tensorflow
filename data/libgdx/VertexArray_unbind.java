@Override
public void unbind(ShaderProgram shader, int[] locations) {
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
    isBound = false;
}
