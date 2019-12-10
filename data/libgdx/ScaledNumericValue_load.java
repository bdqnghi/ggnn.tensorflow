public void load(ScaledNumericValue value) {
    super.load(value);
    highMax = value.highMax;
    highMin = value.highMin;
    scaling = new float[value.scaling.length];
    System.arraycopy(value.scaling, 0, scaling, 0, scaling.length);
    timeline = new float[value.timeline.length];
    System.arraycopy(value.timeline, 0, timeline, 0, timeline.length);
    relative = value.relative;
}
