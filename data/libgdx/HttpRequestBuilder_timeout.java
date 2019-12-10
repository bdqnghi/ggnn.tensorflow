/**
 * If this method is not called, the {@link #defaultTimeout} will be used.
 *
 * @see HttpRequest#setTimeOut(int)
 */
public HttpRequestBuilder timeout(int timeOut) {
    validate();
    httpRequest.setTimeOut(timeOut);
    return this;
}
