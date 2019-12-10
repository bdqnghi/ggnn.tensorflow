public ManifoldType getType() {
    int type = jniGetType(addr);
    if (type == 0)
        return ManifoldType.Circle;
    if (type == 1)
        return ManifoldType.FaceA;
    if (type == 2)
        return ManifoldType.FaceB;
    return ManifoldType.Circle;
}
