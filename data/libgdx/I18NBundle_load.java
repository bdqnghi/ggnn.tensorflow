/**
 * Load the properties from the specified reader.
 *
 * @param reader the reader
 * @throws IOException if an error occurred when reading from the input stream.
 */
// NOTE:
// This method can't be private otherwise GWT can't access it from loadBundle()
protected void load(Reader reader) throws IOException {
    properties = new ObjectMap<String, String>();
    PropertiesUtils.load(properties, reader);
}
