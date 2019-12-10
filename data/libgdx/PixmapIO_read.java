static public Pixmap read(FileHandle file) {
    DataInputStream in = null;
    try {
        // long start = System.nanoTime();
        in = new DataInputStream(new InflaterInputStream(new BufferedInputStream(file.read())));
        int width = in.readInt();
        int height = in.readInt();
        Format format = Format.fromGdx2DPixmapFormat(in.readInt());
        Pixmap pixmap = new Pixmap(width, height, format);
        ByteBuffer pixelBuf = pixmap.getPixels();
        pixelBuf.position(0);
        pixelBuf.limit(pixelBuf.capacity());
        synchronized (readBuffer) {
            int readBytes = 0;
            while ((readBytes = in.read(readBuffer)) > 0) {
                pixelBuf.put(readBuffer, 0, readBytes);
            }
        }
        pixelBuf.position(0);
        pixelBuf.limit(pixelBuf.capacity());
        // Gdx.app.log("PixmapIO", "read:" + (System.nanoTime() - start) / 1000000000.0f);
        return pixmap;
    } catch (Exception e) {
        throw new GdxRuntimeException("Couldn't read Pixmap from file '" + file + "'", e);
    } finally {
        StreamUtils.closeQuietly(in);
    }
}
