private void loadNodes(Iterable<ModelNode> modelNodes) {
    nodePartBones.clear();
    for (ModelNode node : modelNodes) {
        nodes.add(loadNode(node));
    }
    for (ObjectMap.Entry<NodePart, ArrayMap<String, Matrix4>> e : nodePartBones.entries()) {
        if (e.key.invBoneBindTransforms == null)
            e.key.invBoneBindTransforms = new ArrayMap<Node, Matrix4>(Node.class, Matrix4.class);
        e.key.invBoneBindTransforms.clear();
        for (ObjectMap.Entry<String, Matrix4> b : e.value.entries()) e.key.invBoneBindTransforms.put(getNode(b.key), new Matrix4(b.value).inv());
    }
}
