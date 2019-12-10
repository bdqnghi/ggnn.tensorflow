/**
 * Creates a mesh out of the chunk, returning the number of indices produced
 * @return the number of vertices produced
 */
public int calculateVertices(float[] vertices) {
    int i = 0;
    int vertexOffset = 0;
    for (int y = 0; y < height; y++) {
        for (int z = 0; z < depth; z++) {
            for (int x = 0; x < width; x++, i++) {
                byte voxel = voxels[i];
                if (voxel == 0)
                    continue;
                if (y < height - 1) {
                    if (voxels[i + topOffset] == 0)
                        vertexOffset = createTop(offset, x, y, z, vertices, vertexOffset);
                } else {
                    vertexOffset = createTop(offset, x, y, z, vertices, vertexOffset);
                }
                if (y > 0) {
                    if (voxels[i + bottomOffset] == 0)
                        vertexOffset = createBottom(offset, x, y, z, vertices, vertexOffset);
                } else {
                    vertexOffset = createBottom(offset, x, y, z, vertices, vertexOffset);
                }
                if (x > 0) {
                    if (voxels[i + leftOffset] == 0)
                        vertexOffset = createLeft(offset, x, y, z, vertices, vertexOffset);
                } else {
                    vertexOffset = createLeft(offset, x, y, z, vertices, vertexOffset);
                }
                if (x < width - 1) {
                    if (voxels[i + rightOffset] == 0)
                        vertexOffset = createRight(offset, x, y, z, vertices, vertexOffset);
                } else {
                    vertexOffset = createRight(offset, x, y, z, vertices, vertexOffset);
                }
                if (z > 0) {
                    if (voxels[i + frontOffset] == 0)
                        vertexOffset = createFront(offset, x, y, z, vertices, vertexOffset);
                } else {
                    vertexOffset = createFront(offset, x, y, z, vertices, vertexOffset);
                }
                if (z < depth - 1) {
                    if (voxels[i + backOffset] == 0)
                        vertexOffset = createBack(offset, x, y, z, vertices, vertexOffset);
                } else {
                    vertexOffset = createBack(offset, x, y, z, vertices, vertexOffset);
                }
            }
        }
    }
    return vertexOffset / VERTEX_SIZE;
}
