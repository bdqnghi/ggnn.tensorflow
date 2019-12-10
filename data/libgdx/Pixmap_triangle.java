private void triangle(int x1, int y1, int x2, int y2, int x3, int y3, DrawType drawType) {
    if (blending == Blending.None) {
        context.setFillStyle(clearColor);
        context.setStrokeStyle(clearColor);
        context.setGlobalCompositeOperation("destination-out");
        context.beginPath();
        context.moveTo(x1, y1);
        context.lineTo(x2, y2);
        context.lineTo(x3, y3);
        context.lineTo(x1, y1);
        fillOrStrokePath(drawType);
        context.closePath();
        context.setFillStyle(color);
        context.setStrokeStyle(color);
        context.setGlobalCompositeOperation(Composite.SOURCE_OVER);
    }
    context.beginPath();
    context.moveTo(x1, y1);
    context.lineTo(x2, y2);
    context.lineTo(x3, y3);
    context.lineTo(x1, y1);
    fillOrStrokePath(drawType);
    context.closePath();
    pixels = null;
}
