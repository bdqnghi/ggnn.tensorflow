private final static Vector3 getScalingAtTime(final NodeAnimation nodeAnim, final float time, final Vector3 out) {
    if (nodeAnim.scaling == null)
        return out.set(nodeAnim.node.scale);
    if (nodeAnim.scaling.size == 1)
        return out.set(nodeAnim.scaling.get(0).value);
    int index = getFirstKeyframeIndexAtTime(nodeAnim.scaling, time);
    final NodeKeyframe firstKeyframe = nodeAnim.scaling.get(index);
    out.set((Vector3) firstKeyframe.value);
    if (++index < nodeAnim.scaling.size) {
        final NodeKeyframe<Vector3> secondKeyframe = nodeAnim.scaling.get(index);
        final float t = (time - firstKeyframe.keytime) / (secondKeyframe.keytime - firstKeyframe.keytime);
        out.lerp(secondKeyframe.value, t);
    }
    return out;
}
