private Node loadNode(ModelNode modelNode) {
    Node node = new Node();
    node.id = modelNode.id;
    if (modelNode.translation != null)
        node.translation.set(modelNode.translation);
    if (modelNode.rotation != null)
        node.rotation.set(modelNode.rotation);
    if (modelNode.scale != null)
        node.scale.set(modelNode.scale);
    // FIXME create temporary maps for faster lookup?
    if (modelNode.parts != null) {
        for (ModelNodePart modelNodePart : modelNode.parts) {
            MeshPart meshPart = null;
            Material meshMaterial = null;
            if (modelNodePart.meshPartId != null) {
                for (MeshPart part : meshParts) {
                    if (modelNodePart.meshPartId.equals(part.id)) {
                        meshPart = part;
                        break;
                    }
                }
            }
            if (modelNodePart.materialId != null) {
                for (Material material : materials) {
                    if (modelNodePart.materialId.equals(material.id)) {
                        meshMaterial = material;
                        break;
                    }
                }
            }
            if (meshPart == null || meshMaterial == null)
                throw new GdxRuntimeException("Invalid node: " + node.id);
            if (meshPart != null && meshMaterial != null) {
                NodePart nodePart = new NodePart();
                nodePart.meshPart = meshPart;
                nodePart.material = meshMaterial;
                node.parts.add(nodePart);
                if (modelNodePart.bones != null)
                    nodePartBones.put(nodePart, modelNodePart.bones);
            }
        }
    }
    if (modelNode.children != null) {
        for (ModelNode child : modelNode.children) {
            node.addChild(loadNode(child));
        }
    }
    return node;
}
