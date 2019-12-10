public void clear() {
    Node[] nodes = this.nodes;
    for (int i = 0, n = size; i < n; i++) nodes[i] = null;
    size = 0;
}
