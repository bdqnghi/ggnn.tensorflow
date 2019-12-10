/**
 * Adds the specified sprite to the cache.
 */
public void add(Sprite sprite) {
    if (mesh.getNumIndices() > 0) {
        add(sprite.getTexture(), sprite.getVertices(), 0, SPRITE_SIZE);
        return;
    }
    float[] spriteVertices = sprite.getVertices();
    // temp0,1,2=sprite0,1,2
    System.arraycopy(spriteVertices, 0, tempVertices, 0, 3 * VERTEX_SIZE);
    // temp3=sprite2
    System.arraycopy(spriteVertices, 2 * VERTEX_SIZE, tempVertices, 3 * VERTEX_SIZE, VERTEX_SIZE);
    // temp4=sprite3
    System.arraycopy(spriteVertices, 3 * VERTEX_SIZE, tempVertices, 4 * VERTEX_SIZE, VERTEX_SIZE);
    // temp5=sprite0
    System.arraycopy(spriteVertices, 0, tempVertices, 5 * VERTEX_SIZE, VERTEX_SIZE);
    add(sprite.getTexture(), tempVertices, 0, 30);
}
