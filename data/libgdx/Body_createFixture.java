/**
 * Creates a fixture from a shape and attach it to this body. This is a convenience function. Use
 * FixtureDef if you need to set parameters like friction, restitution, user data, or filtering.
 * If the density is non-zero, this function automatically updates the mass of the body.
 *
 * @param shape the shape to be cloned.
 * @param density the shape density (set to zero for static bodies).
 * @warning This function is locked during callbacks.
 */
public final Fixture createFixture(Shape shape, float density) {
    fixDef.shape = shape;
    fixDef.density = density;
    return createFixture(fixDef);
}
