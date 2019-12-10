public Cell<T> spaceBottom(float spaceBottom) {
    if (spaceBottom < 0)
        throw new IllegalArgumentException("spaceBottom cannot be < 0.");
    this.spaceBottom = new Fixed(spaceBottom);
    return this;
}
