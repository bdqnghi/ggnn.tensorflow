/**
 * Sets the AngelCodeFont output format for subsequent writes; can be text (for LibGDX) or XML (for other engines, like
 * Pixi.js).
 *
 * @param fmt the output format to use
 */
public static void setOutputFormat(OutputFormat fmt) {
    if (fmt == null)
        throw new NullPointerException("format cannot be null");
    format = fmt;
}
