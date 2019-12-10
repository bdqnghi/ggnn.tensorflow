@Override
public Node<E> next() {
    previousPosition = position;
    position = position.n;
    return previousPosition;
}
