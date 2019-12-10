/**
 * Copy the data from an {@link InputStream} to a string using the specified charset.
 * @param estimatedSize Used to allocate the output buffer to possibly avoid an array copy.
 * @param charset May be null to use the platform's default charset.
 */
public static String copyStreamToString(InputStream input, int estimatedSize, String charset) throws IOException {
    InputStreamReader reader = charset == null ? new InputStreamReader(input) : new InputStreamReader(input, charset);
    StringWriter writer = new StringWriter(Math.max(0, estimatedSize));
    char[] buffer = new char[DEFAULT_BUFFER_SIZE];
    int charsRead;
    while ((charsRead = reader.read(buffer)) != -1) {
        writer.write(buffer, 0, charsRead);
    }
    return writer.toString();
}
