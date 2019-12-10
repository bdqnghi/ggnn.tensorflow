/**
 * Writes the key/value pairs of the specified <code>ObjectMap</code> to the output character stream in a simple line-oriented
 * format compatible with <code>java.util.Properties</code>.
 * <p>
 * Every entry in the <code>ObjectMap</code> is written out, one per line. For each entry the key string is written, then an
 * ASCII <code>=</code>, then the associated element string. For the key, all space characters are written with a preceding
 * <code>\</code> character. For the element, leading space characters, but not embedded or trailing space characters, are
 * written with a preceding <code>\</code> character. The key and element characters <code>#</code>, <code>!</code>,
 * <code>=</code>, and <code>:</code> are written with a preceding backslash to ensure that they are properly loaded.
 * <p>
 * After the entries have been written, the output stream is flushed. The output stream remains open after this method returns.
 *
 * @param properties the {@code ObjectMap}.
 * @param writer an output character stream writer.
 * @param comment an optional comment to be written, or null.
 * @exception IOException if writing this property list to the specified output stream throws an <tt>IOException</tt>.
 * @exception NullPointerException if <code>writer</code> is null.
 */
public static void store(ObjectMap<String, String> properties, Writer writer, String comment) throws IOException {
    storeImpl(properties, writer, comment, false);
}
