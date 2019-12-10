public Vector2 getGroundAnchorA() {
    jniGetGroundAnchorA(addr, tmp);
    groundAnchorA.set(tmp[0], tmp[1]);
    return groundAnchorA;
}
