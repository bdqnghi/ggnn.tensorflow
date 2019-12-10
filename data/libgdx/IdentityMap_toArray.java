/**
 * Returns a new array containing the remaining keys.
 */
public Array<K> toArray() {
    Array array = new Array(true, map.size);
    while (hasNext) array.add(next());
    return array;
}
