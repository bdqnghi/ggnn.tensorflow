private VertexAttribute[] parseAttributes(JsonValue attributes) {
    Array<VertexAttribute> vertexAttributes = new Array<VertexAttribute>();
    int unit = 0;
    int blendWeightCount = 0;
    for (JsonValue value = attributes.child; value != null; value = value.next) {
        String attribute = value.asString();
        String attr = (String) attribute;
        if (attr.equals("POSITION")) {
            vertexAttributes.add(VertexAttribute.Position());
        } else if (attr.equals("NORMAL")) {
            vertexAttributes.add(VertexAttribute.Normal());
        } else if (attr.equals("COLOR")) {
            vertexAttributes.add(VertexAttribute.ColorUnpacked());
        } else if (attr.equals("COLORPACKED")) {
            vertexAttributes.add(VertexAttribute.ColorPacked());
        } else if (attr.equals("TANGENT")) {
            vertexAttributes.add(VertexAttribute.Tangent());
        } else if (attr.equals("BINORMAL")) {
            vertexAttributes.add(VertexAttribute.Binormal());
        } else if (attr.startsWith("TEXCOORD")) {
            vertexAttributes.add(VertexAttribute.TexCoords(unit++));
        } else if (attr.startsWith("BLENDWEIGHT")) {
            vertexAttributes.add(VertexAttribute.BoneWeight(blendWeightCount++));
        } else {
            throw new GdxRuntimeException("Unknown vertex attribute '" + attr + "', should be one of position, normal, uv, tangent or binormal");
        }
    }
    return vertexAttributes.toArray(VertexAttribute.class);
}
