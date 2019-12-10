private T remove(int index) {
    Node[] nodes = this.nodes;
    Node removed = nodes[index];
    nodes[index] = nodes[--size];
    nodes[size] = null;
    if (size > 0 && index < size)
        down(index);
    return (T) removed;
}
