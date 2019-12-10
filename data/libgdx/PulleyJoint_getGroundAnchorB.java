public Vector2 getGroundAnchorB() {
    jniGetGroundAnchorB(addr, tmp);
    groundAnchorB.set(tmp[0], tmp[1]);
    return groundAnchorB;
}
