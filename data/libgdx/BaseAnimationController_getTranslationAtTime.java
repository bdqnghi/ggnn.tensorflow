private final static Vector3 getTranslationAtTime(final NodeAnimation nodeAnim, final float time, final Vector3 out) {
    if (nodeAnim.translation == null)
        return out.set(nodeAnim.node.translation);
    if (nodeAnim.translation.size == 1)
        return out.set(nodeAnim.translation.get(0).value);
    int index = getFirstKeyframeIndexAtTime(nodeAnim.translation, time);
    final NodeKeyframe firstKeyframe = nodeAnim.translation.get(index);
    out.set((Vector3) firstKeyframe.value);
    if (++index < nodeAnim.translation.size) {
        final NodeKeyframe<Vector3> secondKeyframe = nodeAnim.translation.get(index);
        final float t = (time - firstKeyframe.keytime) / (secondKeyframe.keytime - firstKeyframe.keytime);
        out.lerp(secondKeyframe.value, t);
    }
    return out;
}
