/**
 * @param out The {@link Vector3} to receive the dimensions of this bounding box on all three axis.
 * @return The vector specified with the out argument
 */
public Vector3 getDimensions(final Vector3 out) {
    return out.set(dim);
}
