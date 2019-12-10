/**
 * @return maximum amount of decal objects this buffer can hold in memory
 */
public int getSize() {
    return vertices.length / Decal.SIZE;
}
