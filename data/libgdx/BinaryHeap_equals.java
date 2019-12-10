@Override
public boolean equals(Object obj) {
    if (!(obj instanceof BinaryHeap))
        return false;
    BinaryHeap other = (BinaryHeap) obj;
    if (other.size != size)
        return false;
    for (int i = 0, n = size; i < n; i++) if (other.nodes[i].value != nodes[i].value)
        return false;
    return true;
}
