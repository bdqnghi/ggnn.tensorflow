/**
 * Provides direct access to the indices array being built, use with care. The size of the array might be bigger, do not rely
 * on the length of the array. Instead use {@link #getNumIndices()} to calculate the usable size of the array. Must be called
 * in between the call to #begin and #end.
 */
protected short[] getIndices() {
    return indices.items;
}
