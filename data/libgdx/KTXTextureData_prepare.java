@Override
public void prepare() {
    if (compressedData != null)
        throw new GdxRuntimeException("Already prepared");
    if (file == null)
        throw new GdxRuntimeException("Need a file to load from");
    // We support normal ktx files as well as 'zktx' which are gzip ktx file with an int length at the beginning (like ETC1).
    if (file.name().endsWith(".zktx")) {
        byte[] buffer = new byte[1024 * 10];
        DataInputStream in = null;
        try {
            in = new DataInputStream(new BufferedInputStream(new GZIPInputStream(file.read())));
            int fileSize = in.readInt();
            compressedData = BufferUtils.newUnsafeByteBuffer(fileSize);
            int readBytes = 0;
            while ((readBytes = in.read(buffer)) != -1) compressedData.put(buffer, 0, readBytes);
            compressedData.position(0);
            compressedData.limit(compressedData.capacity());
        } catch (Exception e) {
            throw new GdxRuntimeException("Couldn't load zktx file '" + file + "'", e);
        } finally {
            StreamUtils.closeQuietly(in);
        }
    } else {
        compressedData = ByteBuffer.wrap(file.readBytes());
    }
    if (compressedData.get() != (byte) 0x0AB)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (compressedData.get() != (byte) 0x04B)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (compressedData.get() != (byte) 0x054)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (compressedData.get() != (byte) 0x058)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (compressedData.get() != (byte) 0x020)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (compressedData.get() != (byte) 0x031)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (compressedData.get() != (byte) 0x031)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (compressedData.get() != (byte) 0x0BB)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (compressedData.get() != (byte) 0x00D)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (compressedData.get() != (byte) 0x00A)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (compressedData.get() != (byte) 0x01A)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (compressedData.get() != (byte) 0x00A)
        throw new GdxRuntimeException("Invalid KTX Header");
    int endianTag = compressedData.getInt();
    if (endianTag != 0x04030201 && endianTag != 0x01020304)
        throw new GdxRuntimeException("Invalid KTX Header");
    if (endianTag != 0x04030201)
        compressedData.order(compressedData.order() == ByteOrder.BIG_ENDIAN ? ByteOrder.LITTLE_ENDIAN : ByteOrder.BIG_ENDIAN);
    glType = compressedData.getInt();
    glTypeSize = compressedData.getInt();
    glFormat = compressedData.getInt();
    glInternalFormat = compressedData.getInt();
    glBaseInternalFormat = compressedData.getInt();
    pixelWidth = compressedData.getInt();
    pixelHeight = compressedData.getInt();
    pixelDepth = compressedData.getInt();
    numberOfArrayElements = compressedData.getInt();
    numberOfFaces = compressedData.getInt();
    numberOfMipmapLevels = compressedData.getInt();
    if (numberOfMipmapLevels == 0) {
        numberOfMipmapLevels = 1;
        useMipMaps = true;
    }
    int bytesOfKeyValueData = compressedData.getInt();
    imagePos = compressedData.position() + bytesOfKeyValueData;
    if (!compressedData.isDirect()) {
        int pos = imagePos;
        for (int level = 0; level < numberOfMipmapLevels; level++) {
            int faceLodSize = compressedData.getInt(pos);
            int faceLodSizeRounded = (faceLodSize + 3) & ~3;
            pos += faceLodSizeRounded * numberOfFaces + 4;
        }
        compressedData.limit(pos);
        compressedData.position(0);
        ByteBuffer directBuffer = BufferUtils.newUnsafeByteBuffer(pos);
        directBuffer.order(compressedData.order());
        directBuffer.put(compressedData);
        compressedData = directBuffer;
    }
}
