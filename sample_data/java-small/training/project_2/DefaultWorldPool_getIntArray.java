public final int[] getIntArray(int argLength) {
    if (!aints.containsKey(argLength)) {
        aints.put(argLength, new int[argLength]);
    }
    assert (aints.get(argLength).length == argLength) : "Array not built with correct length";
    return aints.get(argLength);
}
