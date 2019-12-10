private void createAxes() {
    ModelBuilder modelBuilder = new ModelBuilder();
    modelBuilder.begin();
    MeshPartBuilder builder = modelBuilder.part("grid", GL20.GL_LINES, Usage.Position | Usage.ColorUnpacked, new Material());
    builder.setColor(Color.LIGHT_GRAY);
    for (float t = GRID_MIN; t <= GRID_MAX; t += GRID_STEP) {
        builder.line(t, 0, GRID_MIN, t, 0, GRID_MAX);
        builder.line(GRID_MIN, 0, t, GRID_MAX, 0, t);
    }
    builder = modelBuilder.part("axes", GL20.GL_LINES, Usage.Position | Usage.ColorUnpacked, new Material());
    builder.setColor(Color.RED);
    builder.line(0, 0, 0, 100, 0, 0);
    builder.setColor(Color.GREEN);
    builder.line(0, 0, 0, 0, 100, 0);
    builder.setColor(Color.BLUE);
    builder.line(0, 0, 0, 0, 0, 100);
    axesModel = modelBuilder.end();
    axesInstance = new ModelInstance(axesModel);
}
