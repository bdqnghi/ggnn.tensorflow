private Object spawnShapeToString(SpawnShapeValue spawnShapeValue) {
    if (spawnShapeValue instanceof PrimitiveSpawnShapeValue) {
        if (spawnShapeValue instanceof PointSpawnShapeValue)
            return SPAWN_SHAPE_POINT;
        else if (spawnShapeValue instanceof LineSpawnShapeValue)
            return SPAWN_SHAPE_LINE;
        else if (spawnShapeValue instanceof RectangleSpawnShapeValue)
            return SPAWN_SHAPE_RECTANGLE;
        else if (spawnShapeValue instanceof EllipseSpawnShapeValue)
            return SPAWN_SHAPE_ELLIPSE;
        else if (spawnShapeValue instanceof CylinderSpawnShapeValue)
            return SPAWN_SHAPE_CYLINDER;
    }
    if (spawnShapeValue instanceof WeightMeshSpawnShapeValue) {
        return SPAWN_SHAPE_WEIGHT_MESH;
    }
    if (spawnShapeValue instanceof UnweightedMeshSpawnShapeValue) {
        return SPAWN_SHAPE_MESH;
    }
    return null;
}
