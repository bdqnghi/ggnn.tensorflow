public SpotLight setTarget(final Vector3 target) {
    direction.set(target).sub(position).nor();
    return this;
}
