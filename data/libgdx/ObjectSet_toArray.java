/**
 * Returns a new array containing the remaining values.
 */
public Array<K> toArray() {
    return toArray(new Array(true, set.size));
}
