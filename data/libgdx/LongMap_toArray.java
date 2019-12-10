/**
 * Returns a new array containing the remaining values.
 */
public LongArray toArray() {
    LongArray array = new LongArray(true, map.size);
    while (hasNext) array.add(next());
    return array;
}
