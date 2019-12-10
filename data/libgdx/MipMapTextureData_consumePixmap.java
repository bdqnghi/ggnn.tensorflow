@Override
public Pixmap consumePixmap() {
    throw new GdxRuntimeException("It's compressed, use the compressed method");
}
