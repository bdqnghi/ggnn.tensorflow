public void calculateBoneTransforms(boolean recursive) {
    for (final NodePart part : parts) {
        if (part.invBoneBindTransforms == null || part.bones == null || part.invBoneBindTransforms.size != part.bones.length)
            continue;
        final int n = part.invBoneBindTransforms.size;
        for (int i = 0; i < n; i++) part.bones[i].set(part.invBoneBindTransforms.keys[i].globalTransform).mul(part.invBoneBindTransforms.values[i]);
    }
    if (recursive) {
        for (Node child : children) {
            child.calculateBoneTransforms(true);
        }
    }
}
