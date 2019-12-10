/**
 * Helper method to apply one animation to either an objectmap for blending or directly to the bones.
 */
protected static void applyAnimation(final ObjectMap<Node, Transform> out, final Pool<Transform> pool, final float alpha, final Animation animation, final float time) {
    if (out == null) {
        for (final NodeAnimation nodeAnim : animation.nodeAnimations) applyNodeAnimationDirectly(nodeAnim, time);
    } else {
        for (final Node node : out.keys()) node.isAnimated = false;
        for (final NodeAnimation nodeAnim : animation.nodeAnimations) applyNodeAnimationBlending(nodeAnim, out, pool, alpha, time);
        for (final ObjectMap.Entry<Node, Transform> e : out.entries()) {
            if (!e.key.isAnimated) {
                e.key.isAnimated = true;
                e.value.lerp(e.key.translation, e.key.rotation, e.key.scale, alpha);
            }
        }
    }
}
