public IntBuffer duplicate() {
    return copy(this, mark);
}
