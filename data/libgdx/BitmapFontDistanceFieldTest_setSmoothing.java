/**
 * @param smoothing a value between 0 and 1
 */
public void setSmoothing(float smoothing) {
    float delta = 0.5f * MathUtils.clamp(smoothing, 0, 1);
    setUniformf("u_lower", 0.5f - delta);
    setUniformf("u_upper", 0.5f + delta);
}
