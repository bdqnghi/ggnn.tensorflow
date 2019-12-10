private void up(int index) {
    Node[] nodes = this.nodes;
    Node node = nodes[index];
    float value = node.value;
    while (index > 0) {
        int parentIndex = (index - 1) >> 1;
        Node parent = nodes[parentIndex];
        if (value < parent.value ^ isMaxHeap) {
            nodes[index] = parent;
            parent.index = index;
            index = parentIndex;
        } else
            break;
    }
    nodes[index] = node;
    node.index = index;
}
