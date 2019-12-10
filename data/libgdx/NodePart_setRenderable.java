// FIXME add copy constructor and override #equals.
/**
 * Convenience method to set the material, mesh, meshPartOffset, meshPartSize, primitiveType and bones members of the specified
 * Renderable. The other member of the provided {@link Renderable} remain untouched. Note that the material, mesh and bones
 * members are referenced, not copied. Any changes made to those objects will be reflected in both the NodePart and Renderable
 * object.
 * @param out The Renderable of which to set the members to the values of this NodePart.
 */
public Renderable setRenderable(final Renderable out) {
    out.material = material;
    out.meshPart.set(meshPart);
    out.bones = bones;
    return out;
}
