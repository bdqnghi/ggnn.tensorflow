public Vector3 pick(Vector3 vector) {
    float a = MathUtils.random(), b = MathUtils.random();
    return vector.set(x1 + a * (x2 - x1) + b * (x3 - x1), y1 + a * (y2 - y1) + b * (y3 - y1), z1 + a * (z2 - z1) + b * (z3 - z1));
}
