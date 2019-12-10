private final static Transform getNodeAnimationTransform(final NodeAnimation nodeAnim, final float time) {
    final Transform transform = tmpT;
    getTranslationAtTime(nodeAnim, time, transform.translation);
    getRotationAtTime(nodeAnim, time, transform.rotation);
    getScalingAtTime(nodeAnim, time, transform.scale);
    return transform;
}
