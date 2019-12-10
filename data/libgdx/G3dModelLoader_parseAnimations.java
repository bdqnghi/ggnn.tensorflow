private void parseAnimations(ModelData model, JsonValue json) {
    JsonValue animations = json.get("animations");
    if (animations == null)
        return;
    model.animations.ensureCapacity(animations.size);
    for (JsonValue anim = animations.child; anim != null; anim = anim.next) {
        JsonValue nodes = anim.get("bones");
        if (nodes == null)
            continue;
        ModelAnimation animation = new ModelAnimation();
        model.animations.add(animation);
        animation.nodeAnimations.ensureCapacity(nodes.size);
        animation.id = anim.getString("id");
        for (JsonValue node = nodes.child; node != null; node = node.next) {
            ModelNodeAnimation nodeAnim = new ModelNodeAnimation();
            animation.nodeAnimations.add(nodeAnim);
            nodeAnim.nodeId = node.getString("boneId");
            // For backwards compatibility (version 0.1):
            JsonValue keyframes = node.get("keyframes");
            if (keyframes != null && keyframes.isArray()) {
                for (JsonValue keyframe = keyframes.child; keyframe != null; keyframe = keyframe.next) {
                    final float keytime = keyframe.getFloat("keytime", 0f) / 1000.f;
                    JsonValue translation = keyframe.get("translation");
                    if (translation != null && translation.size == 3) {
                        if (nodeAnim.translation == null)
                            nodeAnim.translation = new Array<ModelNodeKeyframe<Vector3>>();
                        ModelNodeKeyframe<Vector3> tkf = new ModelNodeKeyframe<Vector3>();
                        tkf.keytime = keytime;
                        tkf.value = new Vector3(translation.getFloat(0), translation.getFloat(1), translation.getFloat(2));
                        nodeAnim.translation.add(tkf);
                    }
                    JsonValue rotation = keyframe.get("rotation");
                    if (rotation != null && rotation.size == 4) {
                        if (nodeAnim.rotation == null)
                            nodeAnim.rotation = new Array<ModelNodeKeyframe<Quaternion>>();
                        ModelNodeKeyframe<Quaternion> rkf = new ModelNodeKeyframe<Quaternion>();
                        rkf.keytime = keytime;
                        rkf.value = new Quaternion(rotation.getFloat(0), rotation.getFloat(1), rotation.getFloat(2), rotation.getFloat(3));
                        nodeAnim.rotation.add(rkf);
                    }
                    JsonValue scale = keyframe.get("scale");
                    if (scale != null && scale.size == 3) {
                        if (nodeAnim.scaling == null)
                            nodeAnim.scaling = new Array<ModelNodeKeyframe<Vector3>>();
                        ModelNodeKeyframe<Vector3> skf = new ModelNodeKeyframe();
                        skf.keytime = keytime;
                        skf.value = new Vector3(scale.getFloat(0), scale.getFloat(1), scale.getFloat(2));
                        nodeAnim.scaling.add(skf);
                    }
                }
            } else {
                // Version 0.2:
                JsonValue translationKF = node.get("translation");
                if (translationKF != null && translationKF.isArray()) {
                    nodeAnim.translation = new Array<ModelNodeKeyframe<Vector3>>();
                    nodeAnim.translation.ensureCapacity(translationKF.size);
                    for (JsonValue keyframe = translationKF.child; keyframe != null; keyframe = keyframe.next) {
                        ModelNodeKeyframe<Vector3> kf = new ModelNodeKeyframe<Vector3>();
                        nodeAnim.translation.add(kf);
                        kf.keytime = keyframe.getFloat("keytime", 0f) / 1000.f;
                        JsonValue translation = keyframe.get("value");
                        if (translation != null && translation.size >= 3)
                            kf.value = new Vector3(translation.getFloat(0), translation.getFloat(1), translation.getFloat(2));
                    }
                }
                JsonValue rotationKF = node.get("rotation");
                if (rotationKF != null && rotationKF.isArray()) {
                    nodeAnim.rotation = new Array<ModelNodeKeyframe<Quaternion>>();
                    nodeAnim.rotation.ensureCapacity(rotationKF.size);
                    for (JsonValue keyframe = rotationKF.child; keyframe != null; keyframe = keyframe.next) {
                        ModelNodeKeyframe<Quaternion> kf = new ModelNodeKeyframe<Quaternion>();
                        nodeAnim.rotation.add(kf);
                        kf.keytime = keyframe.getFloat("keytime", 0f) / 1000.f;
                        JsonValue rotation = keyframe.get("value");
                        if (rotation != null && rotation.size >= 4)
                            kf.value = new Quaternion(rotation.getFloat(0), rotation.getFloat(1), rotation.getFloat(2), rotation.getFloat(3));
                    }
                }
                JsonValue scalingKF = node.get("scaling");
                if (scalingKF != null && scalingKF.isArray()) {
                    nodeAnim.scaling = new Array<ModelNodeKeyframe<Vector3>>();
                    nodeAnim.scaling.ensureCapacity(scalingKF.size);
                    for (JsonValue keyframe = scalingKF.child; keyframe != null; keyframe = keyframe.next) {
                        ModelNodeKeyframe<Vector3> kf = new ModelNodeKeyframe<Vector3>();
                        nodeAnim.scaling.add(kf);
                        kf.keytime = keyframe.getFloat("keytime", 0f) / 1000.f;
                        JsonValue scaling = keyframe.get("value");
                        if (scaling != null && scaling.size >= 3)
                            kf.value = new Vector3(scaling.getFloat(0), scaling.getFloat(1), scaling.getFloat(2));
                    }
                }
            }
        }
    }
}
