public void load(GradientColorValue value) {
    super.load(value);
    colors = new float[value.colors.length];
    System.arraycopy(value.colors, 0, colors, 0, colors.length);
    timeline = new float[value.timeline.length];
    System.arraycopy(value.timeline, 0, timeline, 0, timeline.length);
}
