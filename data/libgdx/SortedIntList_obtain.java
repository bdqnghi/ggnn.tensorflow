public Node<E> obtain(Node<E> p, Node<E> n, E value, int index) {
    Node<E> newNode = super.obtain();
    newNode.p = p;
    newNode.n = n;
    newNode.value = value;
    newNode.index = index;
    return newNode;
}
