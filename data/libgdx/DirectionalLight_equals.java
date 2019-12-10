public boolean equals(final DirectionalLight other) {
    return (other != null) && ((other == this) || ((color.equals(other.color) && direction.equals(other.direction))));
}
