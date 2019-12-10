public void addAll(Array<Node> nodes) {
    for (int i = 0, n = nodes.size; i < n; i++) insert(children.size, nodes.get(i));
}
