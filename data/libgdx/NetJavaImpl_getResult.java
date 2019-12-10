@Override
public byte[] getResult() {
    InputStream input = getInputStream();
    // If the response does not contain any content, input will be null.
    if (input == null) {
        return StreamUtils.EMPTY_BYTES;
    }
    try {
        return StreamUtils.copyStreamToByteArray(input, connection.getContentLength());
    } catch (IOException e) {
        return StreamUtils.EMPTY_BYTES;
    } finally {
        StreamUtils.closeQuietly(input);
    }
}
