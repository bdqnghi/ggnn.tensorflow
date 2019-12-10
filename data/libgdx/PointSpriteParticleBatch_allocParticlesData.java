@Override
protected void allocParticlesData(int capacity) {
    vertices = new float[capacity * CPU_VERTEX_SIZE];
    if (renderable.meshPart.mesh != null)
        renderable.meshPart.mesh.dispose();
    renderable.meshPart.mesh = new Mesh(false, capacity, 0, CPU_ATTRIBUTES);
}
