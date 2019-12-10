public float getVisualPercent() {
    return visualInterpolation.apply((getVisualValue() - min) / (max - min));
}
