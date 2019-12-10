@Override
public void getRenderables(Array<Renderable> renderables, Pool<Renderable> pool) {
    renderedChunks = 0;
    for (int i = 0; i < chunks.length; i++) {
        VoxelChunk chunk = chunks[i];
        Mesh mesh = meshes[i];
        if (dirty[i]) {
            int numVerts = chunk.calculateVertices(vertices);
            numVertices[i] = numVerts / 4 * 6;
            mesh.setVertices(vertices, 0, numVerts * VoxelChunk.VERTEX_SIZE);
            dirty[i] = false;
        }
        if (numVertices[i] == 0)
            continue;
        Renderable renderable = pool.obtain();
        renderable.material = materials[i];
        renderable.meshPart.mesh = mesh;
        renderable.meshPart.offset = 0;
        renderable.meshPart.size = numVertices[i];
        renderable.meshPart.primitiveType = GL20.GL_TRIANGLES;
        renderables.add(renderable);
        renderedChunks++;
    }
}
