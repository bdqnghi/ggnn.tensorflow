public LongBuffer duplicate() {
    return copy(this, mark);
}
