@Override
public Vector3 lerp(final Vector3 target, float alpha) {
    x += alpha * (target.x - x);
    y += alpha * (target.y - y);
    z += alpha * (target.z - z);
    return this;
}
