private final static void applyNodeAnimationDirectly(final NodeAnimation nodeAnim, final float time) {
    final Node node = nodeAnim.node;
    node.isAnimated = true;
    final Transform transform = getNodeAnimationTransform(nodeAnim, time);
    transform.toMatrix4(node.localTransform);
}
