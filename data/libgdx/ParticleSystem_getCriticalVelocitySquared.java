float getCriticalVelocitySquared(final TimeStep step) {
    float velocity = getCriticalVelocity(step);
    return velocity * velocity;
}
