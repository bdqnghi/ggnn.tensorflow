/**
 * Returns a CRC of the remaining bytes in the stream.
 */
public String crc(InputStream input) {
    // fallback
    if (input == null)
        return "" + System.nanoTime();
    CRC32 crc = new CRC32();
    byte[] buffer = new byte[4096];
    try {
        while (true) {
            int length = input.read(buffer);
            if (length == -1)
                break;
            crc.update(buffer, 0, length);
        }
    } catch (Exception ex) {
        try {
            input.close();
        } catch (Exception ignored) {
        }
    }
    return Long.toString(crc.getValue());
}
