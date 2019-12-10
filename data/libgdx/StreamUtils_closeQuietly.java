/**
 * Close and ignore all errors.
 */
public static void closeQuietly(Closeable c) {
    if (c != null) {
        try {
            c.close();
        } catch (Exception ignored) {
        }
    }
}
