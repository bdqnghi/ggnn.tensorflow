public byte get(float x, float y, float z) {
    int ix = (int) x;
    int iy = (int) y;
    int iz = (int) z;
    int chunkX = ix / CHUNK_SIZE_X;
    if (chunkX < 0 || chunkX >= chunksX)
        return 0;
    int chunkY = iy / CHUNK_SIZE_Y;
    if (chunkY < 0 || chunkY >= chunksY)
        return 0;
    int chunkZ = iz / CHUNK_SIZE_Z;
    if (chunkZ < 0 || chunkZ >= chunksZ)
        return 0;
    return chunks[chunkX + chunkZ * chunksX + chunkY * chunksX * chunksZ].get(ix % CHUNK_SIZE_X, iy % CHUNK_SIZE_Y, iz % CHUNK_SIZE_Z);
}
