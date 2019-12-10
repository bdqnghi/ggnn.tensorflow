protected void setPrimitiveSpawnShape(PrimitiveSpawnShapeValue shape, boolean showEdges, SpawnSide side) {
    setSpawnShapeValue(shape);
    SpawnInfluencer influencer = (SpawnInfluencer) editor.getEmitter().findInfluencer(SpawnInfluencer.class);
    influencer.spawnShapeValue = shape;
    widthPanel.setValue(shape.getSpawnWidth());
    heightPanel.setValue(shape.getSpawnHeight());
    depthPanel.setValue(shape.getSpawnDepth());
    setEdgesVisible(showEdges);
    if (showEdges)
        edgesCheckbox.setSelected(shape.isEdges());
    if (side != null) {
        setSidesVisible(true);
        sideCombo.setSelectedItem(side);
    } else {
        setSidesVisible(false);
    }
    widthPanel.setVisible(true);
    heightPanel.setVisible(true);
    depthPanel.setVisible(true);
    meshPanel.setVisible(false);
}
