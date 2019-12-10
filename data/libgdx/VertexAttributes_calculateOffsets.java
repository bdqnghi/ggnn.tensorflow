private int calculateOffsets() {
    int count = 0;
    for (int i = 0; i < attributes.length; i++) {
        VertexAttribute attribute = attributes[i];
        attribute.offset = count;
        if (attribute.usage == VertexAttributes.Usage.ColorPacked)
            count += 4;
        else
            count += 4 * attribute.numComponents;
    }
    return count;
}
