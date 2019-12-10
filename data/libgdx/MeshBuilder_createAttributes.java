/**
 * @param usage bitwise mask of the {@link com.badlogic.gdx.graphics.VertexAttributes.Usage}, only Position, Color, Normal and
 *           TextureCoordinates is supported.
 */
public static VertexAttributes createAttributes(long usage) {
    final Array<VertexAttribute> attrs = new Array<VertexAttribute>();
    if ((usage & Usage.Position) == Usage.Position)
        attrs.add(new VertexAttribute(Usage.Position, 3, ShaderProgram.POSITION_ATTRIBUTE));
    if ((usage & Usage.ColorUnpacked) == Usage.ColorUnpacked)
        attrs.add(new VertexAttribute(Usage.ColorUnpacked, 4, ShaderProgram.COLOR_ATTRIBUTE));
    if ((usage & Usage.ColorPacked) == Usage.ColorPacked)
        attrs.add(new VertexAttribute(Usage.ColorPacked, 4, ShaderProgram.COLOR_ATTRIBUTE));
    if ((usage & Usage.Normal) == Usage.Normal)
        attrs.add(new VertexAttribute(Usage.Normal, 3, ShaderProgram.NORMAL_ATTRIBUTE));
    if ((usage & Usage.TextureCoordinates) == Usage.TextureCoordinates)
        attrs.add(new VertexAttribute(Usage.TextureCoordinates, 2, ShaderProgram.TEXCOORD_ATTRIBUTE + "0"));
    final VertexAttribute[] attributes = new VertexAttribute[attrs.size];
    for (int i = 0; i < attributes.length; i++) attributes[i] = attrs.get(i);
    return new VertexAttributes(attributes);
}
