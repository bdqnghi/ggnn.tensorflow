public ByteBuffer duplicate() {
    return copy(this, mark);
}
