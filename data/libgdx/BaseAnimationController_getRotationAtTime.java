private final static Quaternion getRotationAtTime(final NodeAnimation nodeAnim, final float time, final Quaternion out) {
    if (nodeAnim.rotation == null)
        return out.set(nodeAnim.node.rotation);
    if (nodeAnim.rotation.size == 1)
        return out.set(nodeAnim.rotation.get(0).value);
    int index = getFirstKeyframeIndexAtTime(nodeAnim.rotation, time);
    final NodeKeyframe firstKeyframe = nodeAnim.rotation.get(index);
    out.set((Quaternion) firstKeyframe.value);
    if (++index < nodeAnim.rotation.size) {
        final NodeKeyframe<Quaternion> secondKeyframe = nodeAnim.rotation.get(index);
        final float t = (time - firstKeyframe.keytime) / (secondKeyframe.keytime - firstKeyframe.keytime);
        out.slerp(secondKeyframe.value, t);
    }
    return out;
}
