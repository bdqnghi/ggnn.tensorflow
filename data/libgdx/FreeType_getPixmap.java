/*
			FT_Bitmap* bmp = (FT_Bitmap*)bitmap;
			return env->NewDirectByteBuffer((void*)bmp->buffer, bmp->rows * abs(bmp->pitch) * bmp->width);
		*/
// @on
public Pixmap getPixmap(Format format, Color color, float gamma) {
    int width = getWidth(), rows = getRows();
    ByteBuffer src = getBuffer();
    Pixmap pixmap;
    int pixelMode = getPixelMode();
    // We currently ignore negative pitch.
    int rowBytes = Math.abs(getPitch());
    if (color == Color.WHITE && pixelMode == FT_PIXEL_MODE_GRAY && rowBytes == width && gamma == 1) {
        pixmap = new Pixmap(width, rows, Format.Alpha);
        BufferUtils.copy(src, pixmap.getPixels(), pixmap.getPixels().capacity());
    } else {
        pixmap = new Pixmap(width, rows, Format.RGBA8888);
        int rgba = Color.rgba8888(color);
        byte[] srcRow = new byte[rowBytes];
        int[] dstRow = new int[width];
        IntBuffer dst = pixmap.getPixels().asIntBuffer();
        if (pixelMode == FT_PIXEL_MODE_MONO) {
            // Use the specified color for each set bit.
            for (int y = 0; y < rows; y++) {
                src.get(srcRow);
                for (int i = 0, x = 0; x < width; i++, x += 8) {
                    byte b = srcRow[i];
                    for (int ii = 0, n = Math.min(8, width - x); ii < n; ii++) {
                        if ((b & (1 << (7 - ii))) != 0)
                            dstRow[x + ii] = rgba;
                        else
                            dstRow[x + ii] = 0;
                    }
                }
                dst.put(dstRow);
            }
        } else {
            // Use the specified color for RGB, blend the FreeType bitmap with alpha.
            int rgb = rgba & 0xffffff00;
            int a = rgba & 0xff;
            for (int y = 0; y < rows; y++) {
                src.get(srcRow);
                for (int x = 0; x < width; x++) {
                    float alpha = (srcRow[x] & 0xff) / 255f;
                    // Inverse gamma.
                    alpha = (float) Math.pow(alpha, gamma);
                    dstRow[x] = rgb | (int) (a * alpha);
                }
                dst.put(dstRow);
            }
        }
    }
    Pixmap converted = pixmap;
    if (format != pixmap.getFormat()) {
        converted = new Pixmap(pixmap.getWidth(), pixmap.getHeight(), format);
        Blending blending = Pixmap.getBlending();
        Pixmap.setBlending(Blending.None);
        converted.drawPixmap(pixmap, 0, 0);
        Pixmap.setBlending(blending);
        pixmap.dispose();
    }
    return converted;
}
