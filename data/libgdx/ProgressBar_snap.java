/**
 * Returns a snapped value.
 */
private float snap(float value) {
    if (snapValues == null)
        return value;
    for (int i = 0; i < snapValues.length; i++) {
        if (Math.abs(value - snapValues[i]) <= threshold)
            return snapValues[i];
    }
    return value;
}
