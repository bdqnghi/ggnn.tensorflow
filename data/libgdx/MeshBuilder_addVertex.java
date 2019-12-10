private final void addVertex(final float[] values, final int offset) {
    final int o = vertices.size;
    vertices.addAll(values, offset, stride);
    lastIndex = (short) (vindex++);
    if (vertexTransformationEnabled) {
        transformPosition(vertices.items, o + posOffset, posSize, positionTransform);
        if (norOffset >= 0)
            transformNormal(vertices.items, o + norOffset, 3, normalTransform);
    }
    final float x = vertices.items[o + posOffset];
    final float y = (posSize > 1) ? vertices.items[o + posOffset + 1] : 0f;
    final float z = (posSize > 2) ? vertices.items[o + posOffset + 2] : 0f;
    bounds.ext(x, y, z);
    if (hasColor) {
        if (colOffset >= 0) {
            vertices.items[o + colOffset] *= color.r;
            vertices.items[o + colOffset + 1] *= color.g;
            vertices.items[o + colOffset + 2] *= color.b;
            if (colSize > 3)
                vertices.items[o + colOffset + 3] *= color.a;
        } else if (cpOffset >= 0) {
            vertices.items[o + cpOffset] = tempC1.set(NumberUtils.floatToIntColor(vertices.items[o + cpOffset])).mul(color).toFloatBits();
        }
    }
    if (hasUVTransform && uvOffset >= 0) {
        vertices.items[o + uvOffset] = uOffset + uScale * vertices.items[o + uvOffset];
        vertices.items[o + uvOffset + 1] = vOffset + vScale * vertices.items[o + uvOffset + 1];
    }
}
