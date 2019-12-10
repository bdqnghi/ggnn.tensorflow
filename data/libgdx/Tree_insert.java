public void insert(int index, Node node) {
    node.parent = this;
    children.insert(index, node);
    updateChildren();
}
