public VertexInfo set(final VertexInfo other) {
    if (other == null)
        return set(null, null, null, null);
    hasPosition = other.hasPosition;
    position.set(other.position);
    hasNormal = other.hasNormal;
    normal.set(other.normal);
    hasColor = other.hasColor;
    color.set(other.color);
    hasUV = other.hasUV;
    uv.set(other.uv);
    return this;
}
