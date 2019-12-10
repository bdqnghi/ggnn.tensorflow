/**
 * @see HttpRequest#setHeader(String, String)
 */
public HttpRequestBuilder header(String name, String value) {
    validate();
    httpRequest.setHeader(name, value);
    return this;
}
