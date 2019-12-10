protected Vec2[] getInitializedArray(int argLength) {
    final Vec2[] ray = new Vec2[argLength];
    for (int i = 0; i < ray.length; i++) {
        ray[i] = new Vec2();
    }
    return ray;
}
