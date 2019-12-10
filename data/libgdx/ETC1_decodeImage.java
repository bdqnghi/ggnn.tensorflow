/**
 * Takes ETC1 compressed image data and converts it to a {@link Format#RGB565} or {@link Format#RGB888} {@link Pixmap}. Does
 * not modify the ByteBuffer's position or limit.
 * @param etc1Data the {@link ETC1Data} instance
 * @param format either {@link Format#RGB565} or {@link Format#RGB888}
 * @return the Pixmap
 */
public static Pixmap decodeImage(ETC1Data etc1Data, Format format) {
    int dataOffset = 0;
    int width = 0;
    int height = 0;
    if (etc1Data.hasPKMHeader()) {
        dataOffset = 16;
        width = ETC1.getWidthPKM(etc1Data.compressedData, 0);
        height = ETC1.getHeightPKM(etc1Data.compressedData, 0);
    } else {
        dataOffset = 0;
        width = etc1Data.width;
        height = etc1Data.height;
    }
    int pixelSize = getPixelSize(format);
    Pixmap pixmap = new Pixmap(width, height, format);
    decodeImage(etc1Data.compressedData, dataOffset, pixmap.getPixels(), 0, width, height, pixelSize);
    return pixmap;
}
