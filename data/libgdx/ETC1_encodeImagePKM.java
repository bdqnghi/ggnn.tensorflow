/**
 * Encodes the image via the ETC1 compression scheme. Only {@link Format#RGB565} and {@link Format#RGB888} are supported. Adds
 * a PKM header in front of the compressed image data.
 * @param pixmap the {@link Pixmap}
 * @return the {@link ETC1Data}
 */
public static ETC1Data encodeImagePKM(Pixmap pixmap) {
    int pixelSize = getPixelSize(pixmap.getFormat());
    ByteBuffer compressedData = encodeImagePKM(pixmap.getPixels(), 0, pixmap.getWidth(), pixmap.getHeight(), pixelSize);
    BufferUtils.newUnsafeByteBuffer(compressedData);
    return new ETC1Data(pixmap.getWidth(), pixmap.getHeight(), compressedData, 16);
}
