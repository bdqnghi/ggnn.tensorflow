/**
 * Returns the first VertexAttribute for the given usage.
 * @param usage The usage of the VertexAttribute to find.
 */
public VertexAttribute findByUsage(int usage) {
    int len = size();
    for (int i = 0; i < len; i++) if (get(i).usage == usage)
        return get(i);
    return null;
}
