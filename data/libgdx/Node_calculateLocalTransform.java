/**
 * Calculates the local transform based on the translation, scale and rotation
 * @return the local transform
 */
public Matrix4 calculateLocalTransform() {
    if (!isAnimated)
        localTransform.set(translation, rotation, scale);
    return localTransform;
}
