/**
 * Provides direct access to the vertices array being built, use with care. The size of the array might be bigger, do not rely
 * on the length of the array. Instead use {@link #getFloatsPerVertex()} * {@link #getNumVertices()} to calculate the usable
 * size of the array. Must be called in between the call to #begin and #end.
 */
protected float[] getVertices() {
    return vertices.items;
}
