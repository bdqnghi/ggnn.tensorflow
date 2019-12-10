private void line(int x, int y, int x2, int y2, DrawType drawType) {
    if (blending == Blending.None) {
        context.setFillStyle(clearColor);
        context.setStrokeStyle(clearColor);
        context.setGlobalCompositeOperation("destination-out");
        context.beginPath();
        context.moveTo(x, y);
        context.lineTo(x2, y2);
        fillOrStrokePath(drawType);
        context.closePath();
        context.setFillStyle(color);
        context.setStrokeStyle(color);
        context.setGlobalCompositeOperation(Composite.SOURCE_OVER);
    }
    context.beginPath();
    context.moveTo(x, y);
    context.lineTo(x2, y2);
    fillOrStrokePath(drawType);
    context.closePath();
}
