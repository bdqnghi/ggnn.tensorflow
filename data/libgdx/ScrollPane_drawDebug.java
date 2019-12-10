public void drawDebug(ShapeRenderer shapes) {
    shapes.flush();
    applyTransform(shapes, computeTransform());
    if (ScissorStack.pushScissors(scissorBounds)) {
        drawDebugChildren(shapes);
        ScissorStack.popScissors();
    }
    resetTransform(shapes);
}
