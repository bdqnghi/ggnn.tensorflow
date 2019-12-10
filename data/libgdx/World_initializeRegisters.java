private void initializeRegisters() {
    addType(pool.getCircleContactStack(), ShapeType.CIRCLE, ShapeType.CIRCLE);
    addType(pool.getPolyCircleContactStack(), ShapeType.POLYGON, ShapeType.CIRCLE);
    addType(pool.getPolyContactStack(), ShapeType.POLYGON, ShapeType.POLYGON);
    addType(pool.getEdgeCircleContactStack(), ShapeType.EDGE, ShapeType.CIRCLE);
    addType(pool.getEdgePolyContactStack(), ShapeType.EDGE, ShapeType.POLYGON);
    addType(pool.getChainCircleContactStack(), ShapeType.CHAIN, ShapeType.CIRCLE);
    addType(pool.getChainPolyContactStack(), ShapeType.CHAIN, ShapeType.POLYGON);
}
