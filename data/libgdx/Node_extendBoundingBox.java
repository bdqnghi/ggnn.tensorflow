/**
 * Extends the bounding box with the bounds of this Node. This is a potential slow operation, it is advised to cache the
 * result.
 */
public BoundingBox extendBoundingBox(final BoundingBox out, boolean transform) {
    final int partCount = parts.size;
    for (int i = 0; i < partCount; i++) {
        final NodePart part = parts.get(i);
        if (part.enabled) {
            final MeshPart meshPart = part.meshPart;
            if (transform)
                meshPart.mesh.extendBoundingBox(out, meshPart.offset, meshPart.size, globalTransform);
            else
                meshPart.mesh.extendBoundingBox(out, meshPart.offset, meshPart.size);
        }
    }
    final int childCount = children.size;
    for (int i = 0; i < childCount; i++) children.get(i).extendBoundingBox(out);
    return out;
}
