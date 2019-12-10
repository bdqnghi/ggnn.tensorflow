public FloatBuffer duplicate() {
    return copy(this, mark);
}
