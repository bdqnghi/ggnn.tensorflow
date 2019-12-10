private void allocRenderables(int capacity) {
    // Free old meshes
    int meshCount = MathUtils.ceil(capacity / MAX_PARTICLES_PER_MESH), free = renderablePool.getFree();
    if (free < meshCount) {
        for (int i = 0, left = meshCount - free; i < left; ++i) renderablePool.free(renderablePool.newObject());
    }
}
