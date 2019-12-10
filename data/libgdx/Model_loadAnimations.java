private void loadAnimations(Iterable<ModelAnimation> modelAnimations) {
    for (final ModelAnimation anim : modelAnimations) {
        Animation animation = new Animation();
        animation.id = anim.id;
        for (ModelNodeAnimation nanim : anim.nodeAnimations) {
            final Node node = getNode(nanim.nodeId);
            if (node == null)
                continue;
            NodeAnimation nodeAnim = new NodeAnimation();
            nodeAnim.node = node;
            if (nanim.translation != null) {
                nodeAnim.translation = new Array<NodeKeyframe<Vector3>>();
                nodeAnim.translation.ensureCapacity(nanim.translation.size);
                for (ModelNodeKeyframe<Vector3> kf : nanim.translation) {
                    if (kf.keytime > animation.duration)
                        animation.duration = kf.keytime;
                    nodeAnim.translation.add(new NodeKeyframe<Vector3>(kf.keytime, new Vector3(kf.value == null ? node.translation : kf.value)));
                }
            }
            if (nanim.rotation != null) {
                nodeAnim.rotation = new Array<NodeKeyframe<Quaternion>>();
                nodeAnim.rotation.ensureCapacity(nanim.rotation.size);
                for (ModelNodeKeyframe<Quaternion> kf : nanim.rotation) {
                    if (kf.keytime > animation.duration)
                        animation.duration = kf.keytime;
                    nodeAnim.rotation.add(new NodeKeyframe<Quaternion>(kf.keytime, new Quaternion(kf.value == null ? node.rotation : kf.value)));
                }
            }
            if (nanim.scaling != null) {
                nodeAnim.scaling = new Array<NodeKeyframe<Vector3>>();
                nodeAnim.scaling.ensureCapacity(nanim.scaling.size);
                for (ModelNodeKeyframe<Vector3> kf : nanim.scaling) {
                    if (kf.keytime > animation.duration)
                        animation.duration = kf.keytime;
                    nodeAnim.scaling.add(new NodeKeyframe<Vector3>(kf.keytime, new Vector3(kf.value == null ? node.scale : kf.value)));
                }
            }
            if ((nodeAnim.translation != null && nodeAnim.translation.size > 0) || (nodeAnim.rotation != null && nodeAnim.rotation.size > 0) || (nodeAnim.scaling != null && nodeAnim.scaling.size > 0))
                animation.nodeAnimations.add(nodeAnim);
        }
        if (animation.nodeAnimations.size > 0)
            animations.add(animation);
    }
}
