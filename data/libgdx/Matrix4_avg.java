/**
 * Averages the given transforms with the given weights and stores the result in this matrix. Translations and scales are
 * lerped while rotations are slerped. Does not destroy the data contained in t or w; Sum of w_i must be equal to 1, or
 * unexpected results will occur.
 * @param t List of transforms
 * @param w List of weights
 * @return This matrix for chaining
 */
public Matrix4 avg(Matrix4[] t, float[] w) {
    tmpVec.set(t[0].getScale(tmpUp).scl(w[0]));
    quat.set(t[0].getRotation(quat2).exp(w[0]));
    tmpForward.set(t[0].getTranslation(tmpUp).scl(w[0]));
    for (int i = 1; i < t.length; i++) {
        tmpVec.add(t[i].getScale(tmpUp).scl(w[i]));
        quat.mul(t[i].getRotation(quat2).exp(w[i]));
        tmpForward.add(t[i].getTranslation(tmpUp).scl(w[i]));
    }
    quat.nor();
    setToScaling(tmpVec);
    rotate(quat);
    setTranslation(tmpForward);
    return this;
}
