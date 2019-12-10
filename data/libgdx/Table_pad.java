public Table pad(float top, float left, float bottom, float right) {
    padTop = new Fixed(top);
    padLeft = new Fixed(left);
    padBottom = new Fixed(bottom);
    padRight = new Fixed(right);
    sizeInvalid = true;
    return this;
}
