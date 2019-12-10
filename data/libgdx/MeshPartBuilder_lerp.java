public VertexInfo lerp(final VertexInfo target, float alpha) {
    if (hasPosition && target.hasPosition)
        position.lerp(target.position, alpha);
    if (hasNormal && target.hasNormal)
        normal.lerp(target.normal, alpha);
    if (hasColor && target.hasColor)
        color.lerp(target.color, alpha);
    if (hasUV && target.hasUV)
        uv.lerp(target.uv, alpha);
    return this;
}
