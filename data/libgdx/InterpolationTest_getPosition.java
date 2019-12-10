/**
 * @return the {@link #position} with the {@link #selectedInterpolation interpolation} applied
 */
Vector2 getPosition(float time) {
    position.set(targetPosition);
    position.sub(startPosition);
    position.scl(getInterpolation(selectedInterpolation).apply(time / duration));
    position.add(startPosition);
    return position;
}
