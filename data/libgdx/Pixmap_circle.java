private void circle(int x, int y, int radius, DrawType drawType) {
    if (blending == Blending.None) {
        context.setFillStyle(clearColor);
        context.setStrokeStyle(clearColor);
        context.setGlobalCompositeOperation("destination-out");
        context.beginPath();
        context.arc(x, y, radius, 0, 2 * Math.PI, false);
        fillOrStrokePath(drawType);
        context.closePath();
        context.setFillStyle(color);
        context.setStrokeStyle(color);
        context.setGlobalCompositeOperation(Composite.SOURCE_OVER);
    }
    context.beginPath();
    context.arc(x, y, radius, 0, 2 * Math.PI, false);
    fillOrStrokePath(drawType);
    context.closePath();
    pixels = null;
}
