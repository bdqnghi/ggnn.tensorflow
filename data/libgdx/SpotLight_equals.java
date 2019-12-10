public boolean equals(SpotLight other) {
    return (other != null && (other == this || (color.equals(other.color) && position.equals(other.position) && direction.equals(other.direction) && MathUtils.isEqual(intensity, other.intensity) && MathUtils.isEqual(cutoffAngle, other.cutoffAngle) && MathUtils.isEqual(exponent, other.exponent))));
}
