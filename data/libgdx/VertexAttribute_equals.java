public boolean equals(final VertexAttribute other) {
    return other != null && usage == other.usage && numComponents == other.numComponents && alias.equals(other.alias) && unit == other.unit;
}
