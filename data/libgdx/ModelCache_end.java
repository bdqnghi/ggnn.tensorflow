/**
 * Finishes creating the cache, must be called after a call to {@link #begin()}, only after this call the cache will be valid
 * (until the next call to {@link #begin()}). Calling this method will process all renderables added using one of the add(...)
 * methods and will combine them if possible.
 */
public void end() {
    if (!building)
        throw new GdxRuntimeException("Call begin() prior to calling end()");
    building = false;
    if (items.size == 0)
        return;
    sorter.sort(camera, items);
    int itemCount = items.size;
    int initCount = renderables.size;
    final Renderable first = items.get(0);
    VertexAttributes vertexAttributes = first.meshPart.mesh.getVertexAttributes();
    Material material = first.material;
    int primitiveType = first.meshPart.primitiveType;
    int offset = renderables.size;
    meshBuilder.begin(vertexAttributes);
    MeshPart part = meshBuilder.part("", primitiveType, meshPartPool.obtain());
    renderables.add(obtainRenderable(material, primitiveType));
    for (int i = 0, n = items.size; i < n; ++i) {
        final Renderable renderable = items.get(i);
        final VertexAttributes va = renderable.meshPart.mesh.getVertexAttributes();
        final Material mat = renderable.material;
        final int pt = renderable.meshPart.primitiveType;
        final boolean sameMesh = va.equals(vertexAttributes) && // comparing indices and vertices...
        renderable.meshPart.size + meshBuilder.getNumVertices() < Short.MAX_VALUE;
        final boolean samePart = sameMesh && pt == primitiveType && mat.same(material, true);
        if (!samePart) {
            if (!sameMesh) {
                final Mesh mesh = meshBuilder.end(meshPool.obtain(vertexAttributes, meshBuilder.getNumVertices(), meshBuilder.getNumIndices()));
                while (offset < renderables.size) renderables.get(offset++).meshPart.mesh = mesh;
                meshBuilder.begin(vertexAttributes = va);
            }
            final MeshPart newPart = meshBuilder.part("", pt, meshPartPool.obtain());
            final Renderable previous = renderables.get(renderables.size - 1);
            previous.meshPart.offset = part.offset;
            previous.meshPart.size = part.size;
            part = newPart;
            renderables.add(obtainRenderable(material = mat, primitiveType = pt));
        }
        meshBuilder.setVertexTransform(renderable.worldTransform);
        meshBuilder.addMesh(renderable.meshPart.mesh, renderable.meshPart.offset, renderable.meshPart.size);
    }
    final Mesh mesh = meshBuilder.end(meshPool.obtain(vertexAttributes, meshBuilder.getNumVertices(), meshBuilder.getNumIndices()));
    while (offset < renderables.size) renderables.get(offset++).meshPart.mesh = mesh;
    final Renderable previous = renderables.get(renderables.size - 1);
    previous.meshPart.offset = part.offset;
    previous.meshPart.size = part.size;
}
