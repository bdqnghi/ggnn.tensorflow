@Override
public Pixmap consumePixmap() {
    if (!isPrepared)
        throw new GdxRuntimeException("Call prepare() before calling getPixmap()");
    isPrepared = false;
    Pixmap pixmap = this.pixmap;
    this.pixmap = null;
    return pixmap;
}
