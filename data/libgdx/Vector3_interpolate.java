@Override
public Vector3 interpolate(Vector3 target, float alpha, Interpolation interpolator) {
    return lerp(target, interpolator.apply(0f, 1f, alpha));
}
