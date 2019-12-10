protected NodePart set(NodePart other) {
    meshPart = new MeshPart(other.meshPart);
    material = other.material;
    enabled = other.enabled;
    if (other.invBoneBindTransforms == null) {
        invBoneBindTransforms = null;
        bones = null;
    } else {
        if (invBoneBindTransforms == null)
            invBoneBindTransforms = new ArrayMap<Node, Matrix4>(true, other.invBoneBindTransforms.size, Node.class, Matrix4.class);
        else
            invBoneBindTransforms.clear();
        invBoneBindTransforms.putAll(other.invBoneBindTransforms);
        if (bones == null || bones.length != invBoneBindTransforms.size)
            bones = new Matrix4[invBoneBindTransforms.size];
        for (int i = 0; i < bones.length; i++) {
            if (bones[i] == null)
                bones[i] = new Matrix4();
        }
    }
    return this;
}
