/**
 * @see HttpRequest#setContent(java.io.InputStream, long)
 */
public HttpRequestBuilder content(InputStream contentStream, long contentLength) {
    validate();
    httpRequest.setContent(contentStream, contentLength);
    return this;
}
