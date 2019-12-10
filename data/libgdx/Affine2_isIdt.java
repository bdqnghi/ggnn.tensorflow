/**
 * Check if this is an indentity matrix.
 * @return True if scale is 1 and rotation is 0.
 */
public boolean isIdt() {
    return (m00 == 1 && m02 == 0 && m12 == 0 && m11 == 1 && m01 == 0 && m10 == 0);
}
