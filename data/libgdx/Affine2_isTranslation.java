/**
 * Check if the this is a plain translation matrix.
 * @return True if scale is 1 and rotation is 0.
 */
public boolean isTranslation() {
    return (m00 == 1 && m11 == 1 && m01 == 0 && m10 == 0);
}
