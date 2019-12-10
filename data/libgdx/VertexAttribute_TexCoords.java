public static VertexAttribute TexCoords(int unit) {
    return new VertexAttribute(Usage.TextureCoordinates, 2, ShaderProgram.TEXCOORD_ATTRIBUTE + unit, unit);
}
