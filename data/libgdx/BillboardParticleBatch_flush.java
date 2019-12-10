@Override
protected void flush(int[] offsets) {
    // fill vertices
    if (useGPU) {
        // if(mode != AlignMode.ParticleDirection)
        fillVerticesGPU(offsets);
    // else
    // fillVerticesToParticleDirectionGPU(offsets);
    } else {
        if (mode == AlignMode.Screen)
            fillVerticesToScreenCPU(offsets);
        else if (mode == AlignMode.ViewPoint)
            fillVerticesToViewPointCPU(offsets);
    // else
    // fillVerticesToParticleDirectionCPU(offsets);
    }
    // send vertices to meshes
    int addedVertexCount = 0;
    int vCount = bufferedParticlesCount * 4;
    for (int v = 0; v < vCount; v += addedVertexCount) {
        addedVertexCount = Math.min(vCount - v, MAX_VERTICES_PER_MESH);
        Renderable renderable = renderablePool.obtain();
        renderable.meshPart.size = (addedVertexCount / 4) * 6;
        renderable.meshPart.mesh.setVertices(vertices, currentVertexSize * v, currentVertexSize * addedVertexCount);
        renderable.meshPart.update();
        renderables.add(renderable);
    }
}
