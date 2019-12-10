private void rectangle(int x, int y, int width, int height, DrawType drawType) {
    if (blending == Blending.None) {
        context.setFillStyle(clearColor);
        context.setStrokeStyle(clearColor);
        context.setGlobalCompositeOperation("destination-out");
        context.beginPath();
        context.rect(x, y, width, height);
        fillOrStrokePath(drawType);
        context.closePath();
        context.setFillStyle(color);
        context.setStrokeStyle(color);
        context.setGlobalCompositeOperation(Composite.SOURCE_OVER);
    }
    context.beginPath();
    context.rect(x, y, width, height);
    fillOrStrokePath(drawType);
    context.closePath();
    pixels = null;
}
