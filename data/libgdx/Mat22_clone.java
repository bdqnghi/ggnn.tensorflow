/**
 * Return a clone of this matrix. djm fixed double allocation
 */
// @Override // annotation omitted for GWT-compatibility
public final Mat22 clone() {
    return new Mat22(ex, ey);
}
