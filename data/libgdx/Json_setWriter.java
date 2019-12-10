/**
 * Sets the writer where JSON output will be written. This is only necessary when not using the toJson methods.
 */
public void setWriter(Writer writer) {
    if (!(writer instanceof JsonWriter))
        writer = new JsonWriter(writer);
    this.writer = (JsonWriter) writer;
    this.writer.setOutputType(outputType);
    this.writer.setQuoteLongValues(quoteLongValues);
}
