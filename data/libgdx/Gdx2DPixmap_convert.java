private void convert(int requestedFormat) {
    Gdx2DPixmap pixmap = new Gdx2DPixmap(width, height, requestedFormat);
    pixmap.drawPixmap(this, 0, 0, 0, 0, width, height);
    dispose();
    this.basePtr = pixmap.basePtr;
    this.format = pixmap.format;
    this.height = pixmap.height;
    this.nativeData = pixmap.nativeData;
    this.pixelPtr = pixmap.pixelPtr;
    this.width = pixmap.width;
}
