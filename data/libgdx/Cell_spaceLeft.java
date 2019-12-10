public Cell<T> spaceLeft(float spaceLeft) {
    if (spaceLeft < 0)
        throw new IllegalArgumentException("spaceLeft cannot be < 0.");
    this.spaceLeft = new Fixed(spaceLeft);
    return this;
}
