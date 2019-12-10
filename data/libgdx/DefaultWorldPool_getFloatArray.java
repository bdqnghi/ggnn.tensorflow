public final float[] getFloatArray(int argLength) {
    if (!afloats.containsKey(argLength)) {
        afloats.put(argLength, new float[argLength]);
    }
    assert (afloats.get(argLength).length == argLength) : "Array not built with correct length";
    return afloats.get(argLength);
}
