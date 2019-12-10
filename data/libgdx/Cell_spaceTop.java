public Cell<T> spaceTop(float spaceTop) {
    if (spaceTop < 0)
        throw new IllegalArgumentException("spaceTop cannot be < 0.");
    this.spaceTop = new Fixed(spaceTop);
    return this;
}
