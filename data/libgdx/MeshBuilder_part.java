/**
 * Starts a new MeshPart. The mesh part is not usable until end() is called. This will reset the current color and vertex
 * transformation.
 * @param id The id (name) of the part
 * @param primitiveType e.g. {@link GL20#GL_TRIANGLES} or {@link GL20#GL_LINES}
 * @param meshPart The part to receive the result
 */
public MeshPart part(final String id, final int primitiveType, MeshPart meshPart) {
    if (this.attributes == null)
        throw new RuntimeException("Call begin() first");
    endpart();
    part = meshPart;
    part.id = id;
    this.primitiveType = part.primitiveType = primitiveType;
    parts.add(part);
    setColor(null);
    setVertexTransform(null);
    setUVRange(null);
    return part;
}
