@Override
public void allocParticlesData(int capacity) {
    vertices = new float[currentVertexSize * 4 * capacity];
    allocRenderables(capacity);
}
