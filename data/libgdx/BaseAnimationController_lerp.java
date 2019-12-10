public Transform lerp(final Vector3 targetT, final Quaternion targetR, final Vector3 targetS, final float alpha) {
    translation.lerp(targetT, alpha);
    rotation.slerp(targetR, alpha);
    scale.lerp(targetS, alpha);
    return this;
}
