public Cell<T> space(float top, float left, float bottom, float right) {
    if (top < 0)
        throw new IllegalArgumentException("top cannot be < 0.");
    if (left < 0)
        throw new IllegalArgumentException("left cannot be < 0.");
    if (bottom < 0)
        throw new IllegalArgumentException("bottom cannot be < 0.");
    if (right < 0)
        throw new IllegalArgumentException("right cannot be < 0.");
    space(new Fixed(top), new Fixed(left), new Fixed(bottom), new Fixed(right));
    return this;
}
