public Array<K> toArray(Array array) {
    array.addAll(map.keys, index, map.size - index);
    return array;
}
