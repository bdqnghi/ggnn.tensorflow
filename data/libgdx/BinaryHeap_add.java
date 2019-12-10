public T add(T node, float value) {
    node.value = value;
    return add(node);
}
