private void allocIndices() {
    int indicesCount = MAX_PARTICLES_PER_MESH * 6;
    indices = new short[indicesCount];
    for (int i = 0, vertex = 0; i < indicesCount; i += 6, vertex += 4) {
        indices[i] = (short) vertex;
        indices[i + 1] = (short) (vertex + 1);
        indices[i + 2] = (short) (vertex + 2);
        indices[i + 3] = (short) (vertex + 2);
        indices[i + 4] = (short) (vertex + 3);
        indices[i + 5] = (short) vertex;
    }
}
