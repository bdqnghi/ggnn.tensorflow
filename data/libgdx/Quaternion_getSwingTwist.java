/**
 * Get the swing rotation and twist rotation for the specified axis. The twist rotation represents the rotation around the
 * specified axis. The swing rotation represents the rotation of the specified axis itself, which is the rotation around an
 * axis perpendicular to the specified axis.
 * </p>
 * The swing and twist rotation can be used to reconstruct the original quaternion: this = swing * twist
 *
 * @param axis the normalized axis for which to get the swing and twist rotation
 * @param swing will receive the swing rotation: the rotation around an axis perpendicular to the specified axis
 * @param twist will receive the twist rotation: the rotation around the specified axis
 * @see <a href="http://www.euclideanspace.com/maths/geometry/rotations/for/decomposition">calculation</a>
 */
public void getSwingTwist(final Vector3 axis, final Quaternion swing, final Quaternion twist) {
    getSwingTwist(axis.x, axis.y, axis.z, swing, twist);
}
