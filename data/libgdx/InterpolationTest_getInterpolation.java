/**
 * @return the {@link #selectedInterpolation selected} interpolation
 */
private Interpolation getInterpolation(String name) {
    try {
        return (Interpolation) Interpolation.class.getField(name).get(null);
    } catch (Exception e) {
        throw new RuntimeException(e);
    }
}
