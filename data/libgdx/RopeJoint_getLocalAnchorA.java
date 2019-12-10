public Vector2 getLocalAnchorA() {
    jniGetLocalAnchorA(addr, tmp);
    localAnchorA.set(tmp[0], tmp[1]);
    return localAnchorA;
}
