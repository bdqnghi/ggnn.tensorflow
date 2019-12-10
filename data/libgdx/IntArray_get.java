public int[] get(int argLength) {
    assert (argLength > 0);
    if (!map.containsKey(argLength)) {
        map.put(argLength, getInitializedArray(argLength));
    }
    assert (map.get(argLength).length == argLength) : "Array not built of correct length";
    return map.get(argLength);
}
