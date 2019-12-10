public Vector2 getAnchorB() {
    jniGetAnchorB(addr, tmp);
    anchorB.x = tmp[0];
    anchorB.y = tmp[1];
    return anchorB;
}
