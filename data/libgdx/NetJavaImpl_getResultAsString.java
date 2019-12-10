@Override
public String getResultAsString() {
    InputStream input = getInputStream();
    // If the response does not contain any content, input will be null.
    if (input == null) {
        return "";
    }
    try {
        return StreamUtils.copyStreamToString(input, connection.getContentLength());
    } catch (IOException e) {
        return "";
    } finally {
        StreamUtils.closeQuietly(input);
    }
}
