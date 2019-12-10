private VertexAttribute[] buildVertexAttributes(boolean hasNormals, boolean hasColor, int numTexCoords) {
    Array<VertexAttribute> attribs = new Array<VertexAttribute>();
    attribs.add(new VertexAttribute(Usage.Position, 3, ShaderProgram.POSITION_ATTRIBUTE));
    if (hasNormals)
        attribs.add(new VertexAttribute(Usage.Normal, 3, ShaderProgram.NORMAL_ATTRIBUTE));
    if (hasColor)
        attribs.add(new VertexAttribute(Usage.ColorPacked, 4, ShaderProgram.COLOR_ATTRIBUTE));
    for (int i = 0; i < numTexCoords; i++) {
        attribs.add(new VertexAttribute(Usage.TextureCoordinates, 2, ShaderProgram.TEXCOORD_ATTRIBUTE + i));
    }
    VertexAttribute[] array = new VertexAttribute[attribs.size];
    for (int i = 0; i < attribs.size; i++) array[i] = attribs.get(i);
    return array;
}
