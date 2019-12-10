/**
 * @return a copy of this controller, should be used after the particle effect has been loaded.
 */
public BoundingBox getBoundingBox() {
    if (boundingBox == null)
        boundingBox = new BoundingBox();
    calculateBoundingBox();
    return boundingBox;
}
