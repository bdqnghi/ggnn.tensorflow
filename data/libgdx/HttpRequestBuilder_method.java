/**
 * @see HttpRequest#setMethod(String)
 */
public HttpRequestBuilder method(String httpMethod) {
    validate();
    httpRequest.setMethod(httpMethod);
    return this;
}
