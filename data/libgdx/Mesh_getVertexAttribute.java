/**
 * Returns the first {@link VertexAttribute} having the given {@link Usage}.
 *
 * @param usage the Usage.
 * @return the VertexAttribute or null if no attribute with that usage was found.
 */
public VertexAttribute getVertexAttribute(int usage) {
    VertexAttributes attributes = vertices.getAttributes();
    int len = attributes.size();
    for (int i = 0; i < len; i++) if (attributes.get(i).usage == usage)
        return attributes.get(i);
    return null;
}
