@Override
public void prepare() {
    if (isPrepared)
        throw new GdxRuntimeException("Already prepared");
    if (pixmap == null) {
        if (file.extension().equals("cim"))
            pixmap = PixmapIO.readCIM(file);
        else
            pixmap = ensurePot(new Pixmap(file));
        width = pixmap.getWidth();
        height = pixmap.getHeight();
        if (format == null)
            format = pixmap.getFormat();
    }
    isPrepared = true;
}
