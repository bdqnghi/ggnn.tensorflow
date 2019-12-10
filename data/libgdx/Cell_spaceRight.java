public Cell<T> spaceRight(float spaceRight) {
    if (spaceRight < 0)
        throw new IllegalArgumentException("spaceRight cannot be < 0.");
    this.spaceRight = new Fixed(spaceRight);
    return this;
}
