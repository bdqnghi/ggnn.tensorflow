private final static void applyNodeAnimationBlending(final NodeAnimation nodeAnim, final ObjectMap<Node, Transform> out, final Pool<Transform> pool, final float alpha, final float time) {
    final Node node = nodeAnim.node;
    node.isAnimated = true;
    final Transform transform = getNodeAnimationTransform(nodeAnim, time);
    Transform t = out.get(node, null);
    if (t != null) {
        if (alpha > 0.999999f)
            t.set(transform);
        else
            t.lerp(transform, alpha);
    } else {
        if (alpha > 0.999999f)
            out.put(node, pool.obtain().set(transform));
        else
            out.put(node, pool.obtain().set(node.translation, node.rotation, node.scale).lerp(transform, alpha));
    }
}
