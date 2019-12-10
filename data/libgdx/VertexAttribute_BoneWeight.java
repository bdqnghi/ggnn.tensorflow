public static VertexAttribute BoneWeight(int unit) {
    return new VertexAttribute(Usage.BoneWeight, 2, "a_boneWeight" + unit, unit);
}
