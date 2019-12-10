private Array<ModelNode> parseNodes(ModelData model, JsonValue json) {
    JsonValue nodes = json.get("nodes");
    if (nodes != null) {
        model.nodes.ensureCapacity(nodes.size);
        for (JsonValue node = nodes.child; node != null; node = node.next) {
            model.nodes.add(parseNodesRecursively(node));
        }
    }
    return model.nodes;
}
