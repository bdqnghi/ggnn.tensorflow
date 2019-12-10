public ShortBuffer duplicate() {
    return copy(this, mark);
}
