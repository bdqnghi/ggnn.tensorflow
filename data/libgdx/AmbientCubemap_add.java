public AmbientCubemap add(final Color color, final Vector3 point, final Vector3 target, final float intensity) {
    final float t = intensity / (1f + target.dst(point));
    return add(color.r * t, color.g * t, color.b * t, target.x - point.x, target.y - point.y, target.z - point.z);
}
