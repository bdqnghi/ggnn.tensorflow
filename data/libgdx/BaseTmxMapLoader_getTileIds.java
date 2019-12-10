static public int[] getTileIds(Element element, int width, int height) {
    Element data = element.getChildByName("data");
    String encoding = data.getAttribute("encoding", null);
    if (encoding == null) {
        // no 'encoding' attribute means that the encoding is XML
        throw new GdxRuntimeException("Unsupported encoding (XML) for TMX Layer Data");
    }
    int[] ids = new int[width * height];
    if (encoding.equals("csv")) {
        String[] array = data.getText().split(",");
        for (int i = 0; i < array.length; i++) ids[i] = (int) Long.parseLong(array[i].trim());
    } else {
        if (true)
            if (encoding.equals("base64")) {
                InputStream is = null;
                try {
                    String compression = data.getAttribute("compression", null);
                    byte[] bytes = Base64Coder.decode(data.getText());
                    if (compression == null)
                        is = new ByteArrayInputStream(bytes);
                    else if (compression.equals("gzip"))
                        is = new BufferedInputStream(new GZIPInputStream(new ByteArrayInputStream(bytes), bytes.length));
                    else if (compression.equals("zlib"))
                        is = new BufferedInputStream(new InflaterInputStream(new ByteArrayInputStream(bytes)));
                    else
                        throw new GdxRuntimeException("Unrecognised compression (" + compression + ") for TMX Layer Data");
                    byte[] temp = new byte[4];
                    for (int y = 0; y < height; y++) {
                        for (int x = 0; x < width; x++) {
                            int read = is.read(temp);
                            while (read < temp.length) {
                                int curr = is.read(temp, read, temp.length - read);
                                if (curr == -1)
                                    break;
                                read += curr;
                            }
                            if (read != temp.length)
                                throw new GdxRuntimeException("Error Reading TMX Layer Data: Premature end of tile data");
                            ids[y * width + x] = unsignedByteToInt(temp[0]) | unsignedByteToInt(temp[1]) << 8 | unsignedByteToInt(temp[2]) << 16 | unsignedByteToInt(temp[3]) << 24;
                        }
                    }
                } catch (IOException e) {
                    throw new GdxRuntimeException("Error Reading TMX Layer Data - IOException: " + e.getMessage());
                } finally {
                    StreamUtils.closeQuietly(is);
                }
            } else {
                // or another editor
                throw new GdxRuntimeException("Unrecognised encoding (" + encoding + ") for TMX Layer Data");
            }
    }
    return ids;
}
