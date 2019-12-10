public boolean equals(PointLight other) {
    return (other != null && (other == this || (color.equals(other.color) && position.equals(other.position) && intensity == other.intensity)));
}
