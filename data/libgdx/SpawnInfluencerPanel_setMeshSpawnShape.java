protected void setMeshSpawnShape(SpawnShapeValue shape) {
    setSpawnShapeValue(shape);
    value.spawnShapeValue = shape;
    setEdgesVisible(false);
    setSidesVisible(false);
    widthPanel.setVisible(false);
    heightPanel.setVisible(false);
    depthPanel.setVisible(false);
    meshPanel.setVisible(true);
}
