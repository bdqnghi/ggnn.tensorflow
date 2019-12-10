private void copyAnimations(final Iterable<Animation> source, boolean shareKeyframes) {
    for (final Animation anim : source) {
        Animation animation = new Animation();
        animation.id = anim.id;
        animation.duration = anim.duration;
        for (final NodeAnimation nanim : anim.nodeAnimations) {
            final Node node = getNode(nanim.node.id);
            if (node == null)
                continue;
            NodeAnimation nodeAnim = new NodeAnimation();
            nodeAnim.node = node;
            if (shareKeyframes) {
                nodeAnim.translation = nanim.translation;
                nodeAnim.rotation = nanim.rotation;
                nodeAnim.scaling = nanim.scaling;
            } else {
                if (nanim.translation != null) {
                    nodeAnim.translation = new Array<NodeKeyframe<Vector3>>();
                    for (final NodeKeyframe<Vector3> kf : nanim.translation) nodeAnim.translation.add(new NodeKeyframe<Vector3>(kf.keytime, kf.value));
                }
                if (nanim.rotation != null) {
                    nodeAnim.rotation = new Array<NodeKeyframe<Quaternion>>();
                    for (final NodeKeyframe<Quaternion> kf : nanim.rotation) nodeAnim.rotation.add(new NodeKeyframe<Quaternion>(kf.keytime, kf.value));
                }
                if (nanim.scaling != null) {
                    nodeAnim.scaling = new Array<NodeKeyframe<Vector3>>();
                    for (final NodeKeyframe<Vector3> kf : nanim.scaling) nodeAnim.scaling.add(new NodeKeyframe<Vector3>(kf.keytime, kf.value));
                }
            }
            if (nodeAnim.translation != null || nodeAnim.rotation != null || nodeAnim.scaling != null)
                animation.nodeAnimations.add(nodeAnim);
        }
        if (animation.nodeAnimations.size > 0)
            animations.add(animation);
    }
}
