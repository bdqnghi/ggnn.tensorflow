@Override
public int compareTo(VertexAttributes o) {
    if (attributes.length != o.attributes.length)
        return attributes.length - o.attributes.length;
    final long m1 = getMask();
    final long m2 = o.getMask();
    if (m1 != m2)
        return m1 < m2 ? -1 : 1;
    for (int i = attributes.length - 1; i >= 0; --i) {
        final VertexAttribute va0 = attributes[i];
        final VertexAttribute va1 = o.attributes[i];
        if (va0.usage != va1.usage)
            return va0.usage - va1.usage;
        if (va0.unit != va1.unit)
            return va0.unit - va1.unit;
        if (va0.numComponents != va1.numComponents)
            return va0.numComponents - va1.numComponents;
        if (va0.normalized != va1.normalized)
            return va0.normalized ? 1 : -1;
        if (va0.type != va1.type)
            return va0.type - va1.type;
    }
    return 0;
}
