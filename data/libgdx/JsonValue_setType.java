public void setType(ValueType type) {
    if (type == null)
        throw new IllegalArgumentException("type cannot be null.");
    this.type = type;
}
