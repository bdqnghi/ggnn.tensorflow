private void image(CanvasElement image, int srcX, int srcY, int srcWidth, int srcHeight, int dstX, int dstY, int dstWidth, int dstHeight) {
    if (blending == Blending.None) {
        context.setFillStyle(clearColor);
        context.setStrokeStyle(clearColor);
        context.setGlobalCompositeOperation("destination-out");
        context.beginPath();
        context.rect(dstX, dstY, dstWidth, dstHeight);
        fillOrStrokePath(DrawType.FILL);
        context.closePath();
        context.setFillStyle(color);
        context.setStrokeStyle(color);
        context.setGlobalCompositeOperation(Composite.SOURCE_OVER);
    }
    context.drawImage(image, srcX, srcY, srcWidth, srcHeight, dstX, dstY, dstWidth, dstHeight);
    pixels = null;
}
