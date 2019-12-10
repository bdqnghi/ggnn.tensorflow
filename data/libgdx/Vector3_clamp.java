@Override
public Vector3 clamp(float min, float max) {
    final float len2 = len2();
    if (len2 == 0f)
        return this;
    float max2 = max * max;
    if (len2 > max2)
        return scl((float) Math.sqrt(max2 / len2));
    float min2 = min * min;
    if (len2 < min2)
        return scl((float) Math.sqrt(min2 / len2));
    return this;
}
