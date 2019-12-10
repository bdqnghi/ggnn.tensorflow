public Model createXYZCoordinates(float axisLength, Material material, long attributes) {
    return createXYZCoordinates(axisLength, 0.1f, 0.1f, 5, GL20.GL_TRIANGLES, material, attributes);
}
