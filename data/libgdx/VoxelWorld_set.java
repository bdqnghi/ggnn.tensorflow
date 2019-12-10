public void set(float x, float y, float z, byte voxel) {
    int ix = (int) x;
    int iy = (int) y;
    int iz = (int) z;
    int chunkX = ix / CHUNK_SIZE_X;
    if (chunkX < 0 || chunkX >= chunksX)
        return;
    int chunkY = iy / CHUNK_SIZE_Y;
    if (chunkY < 0 || chunkY >= chunksY)
        return;
    int chunkZ = iz / CHUNK_SIZE_Z;
    if (chunkZ < 0 || chunkZ >= chunksZ)
        return;
    chunks[chunkX + chunkZ * chunksX + chunkY * chunksX * chunksZ].set(ix % CHUNK_SIZE_X, iy % CHUNK_SIZE_Y, iz % CHUNK_SIZE_Z, voxel);
}
