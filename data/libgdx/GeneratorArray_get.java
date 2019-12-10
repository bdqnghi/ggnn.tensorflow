public VoronoiDiagram.Generator[] get(int length) {
    assert (length > 0);
    if (!map.containsKey(length)) {
        map.put(length, getInitializedArray(length));
    }
    assert (map.get(length).length == length) : "Array not built of correct length";
    return map.get(length);
}
