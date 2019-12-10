public Vector2 getReactionForce(float inv_dt) {
    jniGetReactionForce(addr, inv_dt, tmp);
    reactionForce.x = tmp[0];
    reactionForce.y = tmp[1];
    return reactionForce;
}
