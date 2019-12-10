/**
 * Removes and returns the key/values pair at the specified index.
 */
public void removeIndex(int index) {
    if (index >= size)
        throw new IndexOutOfBoundsException(String.valueOf(index));
    Object[] keys = this.keys;
    size--;
    if (ordered) {
        System.arraycopy(keys, index + 1, keys, index, size - index);
        System.arraycopy(values, index + 1, values, index, size - index);
    } else {
        keys[index] = keys[size];
        values[index] = values[size];
    }
    keys[size] = null;
    values[size] = null;
}
