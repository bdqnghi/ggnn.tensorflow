/**
 * Destroy particles inside a shape. This function is locked during callbacks. In addition, this
 * function immediately destroys particles in the shape in contrast to DestroyParticle() which
 * defers the destruction until the next simulation step.
 *
 * @param Shape which encloses particles that should be destroyed.
 * @param Transform applied to the shape.
 * @param Whether to call the world b2DestructionListener for each particle destroyed.
 * @warning This function is locked during callbacks.
 * @return Number of particles destroyed.
 */
public int destroyParticlesInShape(Shape shape, Transform xf, boolean callDestructionListener) {
    assert (isLocked() == false);
    if (isLocked()) {
        return 0;
    }
    return m_particleSystem.destroyParticlesInShape(shape, xf, callDestructionListener);
}
