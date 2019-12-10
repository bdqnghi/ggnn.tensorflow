/**
 * Copy the data from an {@link InputStream} to a byte array. The stream is not closed.
 * @param estimatedSize Used to allocate the output byte[] to possibly avoid an array copy.
 */
public static byte[] copyStreamToByteArray(InputStream input, int estimatedSize) throws IOException {
    ByteArrayOutputStream baos = new OptimizedByteArrayOutputStream(Math.max(0, estimatedSize));
    copyStream(input, baos);
    return baos.toByteArray();
}
