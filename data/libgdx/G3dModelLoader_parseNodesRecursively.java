private ModelNode parseNodesRecursively(JsonValue json) {
    ModelNode jsonNode = new ModelNode();
    String id = json.getString("id", null);
    if (id == null)
        throw new GdxRuntimeException("Node id missing.");
    jsonNode.id = id;
    JsonValue translation = json.get("translation");
    if (translation != null && translation.size != 3)
        throw new GdxRuntimeException("Node translation incomplete");
    jsonNode.translation = translation == null ? null : new Vector3(translation.getFloat(0), translation.getFloat(1), translation.getFloat(2));
    JsonValue rotation = json.get("rotation");
    if (rotation != null && rotation.size != 4)
        throw new GdxRuntimeException("Node rotation incomplete");
    jsonNode.rotation = rotation == null ? null : new Quaternion(rotation.getFloat(0), rotation.getFloat(1), rotation.getFloat(2), rotation.getFloat(3));
    JsonValue scale = json.get("scale");
    if (scale != null && scale.size != 3)
        throw new GdxRuntimeException("Node scale incomplete");
    jsonNode.scale = scale == null ? null : new Vector3(scale.getFloat(0), scale.getFloat(1), scale.getFloat(2));
    String meshId = json.getString("mesh", null);
    if (meshId != null)
        jsonNode.meshId = meshId;
    JsonValue materials = json.get("parts");
    if (materials != null) {
        jsonNode.parts = new ModelNodePart[materials.size];
        int i = 0;
        for (JsonValue material = materials.child; material != null; material = material.next, i++) {
            ModelNodePart nodePart = new ModelNodePart();
            String meshPartId = material.getString("meshpartid", null);
            String materialId = material.getString("materialid", null);
            if (meshPartId == null || materialId == null) {
                throw new GdxRuntimeException("Node " + id + " part is missing meshPartId or materialId");
            }
            nodePart.materialId = materialId;
            nodePart.meshPartId = meshPartId;
            JsonValue bones = material.get("bones");
            if (bones != null) {
                nodePart.bones = new ArrayMap<String, Matrix4>(true, bones.size, String.class, Matrix4.class);
                int j = 0;
                for (JsonValue bone = bones.child; bone != null; bone = bone.next, j++) {
                    String nodeId = bone.getString("node", null);
                    if (nodeId == null)
                        throw new GdxRuntimeException("Bone node ID missing");
                    Matrix4 transform = new Matrix4();
                    JsonValue val = bone.get("translation");
                    if (val != null && val.size >= 3)
                        transform.translate(val.getFloat(0), val.getFloat(1), val.getFloat(2));
                    val = bone.get("rotation");
                    if (val != null && val.size >= 4)
                        transform.rotate(tempQ.set(val.getFloat(0), val.getFloat(1), val.getFloat(2), val.getFloat(3)));
                    val = bone.get("scale");
                    if (val != null && val.size >= 3)
                        transform.scale(val.getFloat(0), val.getFloat(1), val.getFloat(2));
                    nodePart.bones.put(nodeId, transform);
                }
            }
            jsonNode.parts[i] = nodePart;
        }
    }
    JsonValue children = json.get("children");
    if (children != null) {
        jsonNode.children = new ModelNode[children.size];
        int i = 0;
        for (JsonValue child = children.child; child != null; child = child.next, i++) {
            jsonNode.children[i] = parseNodesRecursively(child);
        }
    }
    return jsonNode;
}
