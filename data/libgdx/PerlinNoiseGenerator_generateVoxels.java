public static void generateVoxels(VoxelWorld voxelWorld, int min, int max, int octaveCount) {
    byte[] heightMap = PerlinNoiseGenerator.generateHeightMap(voxelWorld.voxelsX, voxelWorld.voxelsZ, min, max, octaveCount);
    int idx = 0;
    for (int z = 0; z < voxelWorld.voxelsZ; z++) {
        for (int x = 0; x < voxelWorld.voxelsX; x++) {
            voxelWorld.setColumn(x, heightMap[idx++], z, (byte) 1);
        // voxelWorld.set(x, heightMap[idx++], z, (byte)1);
        }
    }
}
