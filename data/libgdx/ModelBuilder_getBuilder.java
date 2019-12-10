private MeshBuilder getBuilder(final VertexAttributes attributes) {
    for (final MeshBuilder mb : builders) if (mb.getAttributes().equals(attributes) && mb.lastIndex() < Short.MAX_VALUE / 2)
        return mb;
    final MeshBuilder result = new MeshBuilder();
    result.begin(attributes);
    builders.add(result);
    return result;
}
