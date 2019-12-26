public final Vec2[] getVec2Array(int argLength) {
    if (!avecs.containsKey(argLength)) {
        Vec2[] ray = new Vec2[argLength];
        for (int i = 0; i < argLength; i++) {
            ray[i] = new Vec2();
        }
        avecs.put(argLength, ray);
    }
    assert (avecs.get(argLength).length == argLength) : "Array not built with correct length";
    return avecs.get(argLength);
}
