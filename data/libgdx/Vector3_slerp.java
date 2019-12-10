/**
 * Spherically interpolates between this vector and the target vector by alpha which is in the range [0,1]. The result is
 * stored in this vector.
 *
 * @param target The target vector
 * @param alpha The interpolation coefficient
 * @return This vector for chaining.
 */
public Vector3 slerp(final Vector3 target, float alpha) {
    final float dot = dot(target);
    // If the inputs are too close for comfort, simply linearly interpolate.
    if (dot > 0.9995 || dot < -0.9995)
        return lerp(target, alpha);
    // theta0 = angle between input vectors
    final float theta0 = (float) Math.acos(dot);
    // theta = angle between this vector and result
    final float theta = theta0 * alpha;
    final float st = (float) Math.sin(theta);
    final float tx = target.x - x * dot;
    final float ty = target.y - y * dot;
    final float tz = target.z - z * dot;
    final float l2 = tx * tx + ty * ty + tz * tz;
    final float dl = st * ((l2 < 0.0001f) ? 1f : 1f / (float) Math.sqrt(l2));
    return scl((float) Math.cos(theta)).add(tx * dl, ty * dl, tz * dl).nor();
}
