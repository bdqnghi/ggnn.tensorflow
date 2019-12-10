/**
 * Writes the pixmap to the stream without closing the stream.
 */
public void write(OutputStream output, Pixmap pixmap) throws IOException {
    DeflaterOutputStream deflaterOutput = new DeflaterOutputStream(buffer, deflater);
    DataOutputStream dataOutput = new DataOutputStream(output);
    dataOutput.write(SIGNATURE);
    buffer.writeInt(IHDR);
    buffer.writeInt(pixmap.getWidth());
    buffer.writeInt(pixmap.getHeight());
    // 8 bits per component.
    buffer.writeByte(8);
    buffer.writeByte(COLOR_ARGB);
    buffer.writeByte(COMPRESSION_DEFLATE);
    buffer.writeByte(FILTER_NONE);
    buffer.writeByte(INTERLACE_NONE);
    buffer.endChunk(dataOutput);
    buffer.writeInt(IDAT);
    deflater.reset();
    int lineLen = pixmap.getWidth() * 4;
    byte[] lineOut, curLine, prevLine;
    if (lineOutBytes == null) {
        lineOut = (lineOutBytes = new ByteArray(lineLen)).items;
        curLine = (curLineBytes = new ByteArray(lineLen)).items;
        prevLine = (prevLineBytes = new ByteArray(lineLen)).items;
    } else {
        lineOut = lineOutBytes.ensureCapacity(lineLen);
        curLine = curLineBytes.ensureCapacity(lineLen);
        prevLine = prevLineBytes.ensureCapacity(lineLen);
        for (int i = 0, n = lastLineLen; i < n; i++) prevLine[i] = 0;
    }
    lastLineLen = lineLen;
    ByteBuffer pixels = pixmap.getPixels();
    int oldPosition = pixels.position();
    boolean rgba8888 = pixmap.getFormat() == Format.RGBA8888;
    for (int y = 0, h = pixmap.getHeight(); y < h; y++) {
        int py = flipY ? (h - y - 1) : y;
        if (rgba8888) {
            pixels.position(py * lineLen);
            pixels.get(curLine, 0, lineLen);
        } else {
            for (int px = 0, x = 0; px < pixmap.getWidth(); px++) {
                int pixel = pixmap.getPixel(px, py);
                curLine[x++] = (byte) ((pixel >> 24) & 0xff);
                curLine[x++] = (byte) ((pixel >> 16) & 0xff);
                curLine[x++] = (byte) ((pixel >> 8) & 0xff);
                curLine[x++] = (byte) (pixel & 0xff);
            }
        }
        lineOut[0] = (byte) (curLine[0] - prevLine[0]);
        lineOut[1] = (byte) (curLine[1] - prevLine[1]);
        lineOut[2] = (byte) (curLine[2] - prevLine[2]);
        lineOut[3] = (byte) (curLine[3] - prevLine[3]);
        for (int x = 4; x < lineLen; x++) {
            int a = curLine[x - 4] & 0xff;
            int b = prevLine[x] & 0xff;
            int c = prevLine[x - 4] & 0xff;
            int p = a + b - c;
            int pa = p - a;
            if (pa < 0)
                pa = -pa;
            int pb = p - b;
            if (pb < 0)
                pb = -pb;
            int pc = p - c;
            if (pc < 0)
                pc = -pc;
            if (pa <= pb && pa <= pc)
                c = a;
            else if (// 
            pb <= pc)
                c = b;
            lineOut[x] = (byte) (curLine[x] - c);
        }
        deflaterOutput.write(PAETH);
        deflaterOutput.write(lineOut, 0, lineLen);
        byte[] temp = curLine;
        curLine = prevLine;
        prevLine = temp;
    }
    pixels.position(oldPosition);
    deflaterOutput.finish();
    buffer.endChunk(dataOutput);
    buffer.writeInt(IEND);
    buffer.endChunk(dataOutput);
    output.flush();
}
