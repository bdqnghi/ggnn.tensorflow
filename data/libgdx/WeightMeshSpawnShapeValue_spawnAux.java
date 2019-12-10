@Override
public void spawnAux(Vector3 vector, float percent) {
    Triangle t = distribution.value();
    float a = MathUtils.random(), b = MathUtils.random();
    vector.set(t.x1 + a * (t.x2 - t.x1) + b * (t.x3 - t.x1), t.y1 + a * (t.y2 - t.y1) + b * (t.y3 - t.y1), t.z1 + a * (t.z2 - t.z1) + b * (t.z3 - t.z1));
}
