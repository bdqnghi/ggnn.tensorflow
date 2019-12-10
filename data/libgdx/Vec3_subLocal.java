public Vec3 subLocal(Vec3 argVec) {
    x -= argVec.x;
    y -= argVec.y;
    z -= argVec.z;
    return this;
}
