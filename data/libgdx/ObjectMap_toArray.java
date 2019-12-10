/**
 * Adds the remaining keys to the array.
 */
public Array<K> toArray(Array<K> array) {
    while (hasNext) array.add(next());
    return array;
}
