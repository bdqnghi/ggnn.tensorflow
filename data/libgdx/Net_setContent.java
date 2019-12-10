/**
 * Sets the content as a stream to be used for a POST for example, to transmit custom data.
 * @param contentStream The stream with the content data.
 */
public void setContent(InputStream contentStream, long contentLength) {
    this.contentStream = contentStream;
    this.contentLength = contentLength;
}
