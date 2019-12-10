/**
 * Remove the specified animation, by marking the affected nodes as not animated. When switching animation, this should be call
 * prior to applyAnimation(s).
 */
protected void removeAnimation(final Animation animation) {
    for (final NodeAnimation nodeAnim : animation.nodeAnimations) {
        nodeAnim.node.isAnimated = false;
    }
}
