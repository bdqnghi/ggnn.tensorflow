public Cell<T> pad(float top, float left, float bottom, float right) {
    pad(new Fixed(top), new Fixed(left), new Fixed(bottom), new Fixed(right));
    return this;
}
