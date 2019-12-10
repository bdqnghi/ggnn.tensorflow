public Vector2 getAnchorA() {
    jniGetAnchorA(addr, tmp);
    anchorA.x = tmp[0];
    anchorA.y = tmp[1];
    return anchorA;
}
