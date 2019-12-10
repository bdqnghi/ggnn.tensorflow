private void setCurrentSpawnData(SpawnShapeValue spawnShapeValue) {
    SpawnShapeValue local = null;
    if (spawnShapeValue instanceof PointSpawnShapeValue)
        local = pointSpawnShapeValue;
    else if (spawnShapeValue instanceof LineSpawnShapeValue)
        local = lineSpawnShapeValue;
    else if (spawnShapeValue instanceof RectangleSpawnShapeValue)
        local = rectangleSpawnShapeValue;
    else if (spawnShapeValue instanceof EllipseSpawnShapeValue)
        local = ellipseSpawnShapeValue;
    else if (spawnShapeValue instanceof CylinderSpawnShapeValue)
        local = cylinderSpawnShapeValue;
    if (spawnShapeValue instanceof UnweightedMeshSpawnShapeValue)
        local = meshSpawnShapeValue;
    else if (spawnShapeValue instanceof WeightMeshSpawnShapeValue)
        local = weightMeshSpawnShapeValue;
    local.load(spawnShapeValue);
}
