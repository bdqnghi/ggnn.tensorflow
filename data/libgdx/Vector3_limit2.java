@Override
public Vector3 limit2(float limit2) {
    float len2 = len2();
    if (len2 > limit2) {
        scl((float) Math.sqrt(limit2 / len2));
    }
    return this;
}
