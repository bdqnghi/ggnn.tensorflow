public void setValue(T node, float value) {
    float oldValue = node.value;
    node.value = value;
    if (value < oldValue ^ isMaxHeap)
        up(node.index);
    else
        down(node.index);
}
