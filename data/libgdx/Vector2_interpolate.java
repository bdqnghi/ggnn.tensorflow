@Override
public Vector2 interpolate(Vector2 target, float alpha, Interpolation interpolation) {
    return lerp(target, interpolation.apply(alpha));
}
