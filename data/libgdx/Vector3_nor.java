@Override
public Vector3 nor() {
    final float len2 = this.len2();
    if (len2 == 0f || len2 == 1f)
        return this;
    return this.scl(1f / (float) Math.sqrt(len2));
}
