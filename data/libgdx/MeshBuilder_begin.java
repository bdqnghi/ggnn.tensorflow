/**
 * Begin building a mesh
 */
public void begin(final VertexAttributes attributes, int primitiveType) {
    if (this.attributes != null)
        throw new RuntimeException("Call end() first");
    this.attributes = attributes;
    this.vertices.clear();
    this.indices.clear();
    this.parts.clear();
    this.vindex = 0;
    this.lastIndex = -1;
    this.istart = 0;
    this.part = null;
    this.stride = attributes.vertexSize / 4;
    if (this.vertex == null || this.vertex.length < stride)
        this.vertex = new float[stride];
    VertexAttribute a = attributes.findByUsage(Usage.Position);
    if (a == null)
        throw new GdxRuntimeException("Cannot build mesh without position attribute");
    posOffset = a.offset / 4;
    posSize = a.numComponents;
    a = attributes.findByUsage(Usage.Normal);
    norOffset = a == null ? -1 : a.offset / 4;
    a = attributes.findByUsage(Usage.ColorUnpacked);
    colOffset = a == null ? -1 : a.offset / 4;
    colSize = a == null ? 0 : a.numComponents;
    a = attributes.findByUsage(Usage.ColorPacked);
    cpOffset = a == null ? -1 : a.offset / 4;
    a = attributes.findByUsage(Usage.TextureCoordinates);
    uvOffset = a == null ? -1 : a.offset / 4;
    setColor(null);
    setVertexTransform(null);
    setUVRange(null);
    this.primitiveType = primitiveType;
    bounds.inf();
}
