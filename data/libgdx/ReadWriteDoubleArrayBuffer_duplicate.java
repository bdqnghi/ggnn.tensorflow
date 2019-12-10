public DoubleBuffer duplicate() {
    return copy(this, mark);
}
