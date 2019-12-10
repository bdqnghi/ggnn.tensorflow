/**
 * Returns whether the plane is facing the direction vector. Think of the direction vector as the direction a camera looks in.
 * This method will return true if the front side of the plane determined by its normal faces the camera.
 *
 * @param direction the direction
 * @return whether the plane is front facing
 */
public boolean isFrontFacing(Vector3 direction) {
    float dot = normal.dot(direction);
    return dot <= 0;
}
