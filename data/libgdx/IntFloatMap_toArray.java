/**
 * Returns a new array containing the remaining keys.
 */
public IntArray toArray() {
    IntArray array = new IntArray(true, map.size);
    while (hasNext) array.add(next());
    return array;
}
