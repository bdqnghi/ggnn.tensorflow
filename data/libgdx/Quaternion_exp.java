/**
 * Calculates (this quaternion)^alpha where alpha is a real number and stores the result in this quaternion.
 * See http://en.wikipedia.org/wiki/Quaternion#Exponential.2C_logarithm.2C_and_power
 * @param alpha Exponent
 * @return This quaternion for chaining
 */
public Quaternion exp(float alpha) {
    // Calculate |q|^alpha
    float norm = len();
    float normExp = (float) Math.pow(norm, alpha);
    // Calculate theta
    float theta = (float) Math.acos(w / norm);
    // Calculate coefficient of basis elements
    float coeff = 0;
    if (// If theta is small enough, use the limit of sin(alpha*theta) / sin(theta) instead of actual value
    Math.abs(theta) < 0.001)
        coeff = normExp * alpha / norm;
    else
        coeff = (float) (normExp * Math.sin(alpha * theta) / (norm * Math.sin(theta)));
    // Write results
    w = (float) (normExp * Math.cos(alpha * theta));
    x *= coeff;
    y *= coeff;
    z *= coeff;
    // Fix any possible discrepancies
    nor();
    return this;
}
