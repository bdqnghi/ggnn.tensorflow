/**
 * Encodes the image via the ETC1 compression scheme. Only {@link Format#RGB565} and {@link Format#RGB888} are supported.
 * @param pixmap the {@link Pixmap}
 * @return the {@link ETC1Data}
 */
public static ETC1Data encodeImage(Pixmap pixmap) {
    int pixelSize = getPixelSize(pixmap.getFormat());
    ByteBuffer compressedData = encodeImage(pixmap.getPixels(), 0, pixmap.getWidth(), pixmap.getHeight(), pixelSize);
    BufferUtils.newUnsafeByteBuffer(compressedData);
    return new ETC1Data(pixmap.getWidth(), pixmap.getHeight(), compressedData, 0);
}
