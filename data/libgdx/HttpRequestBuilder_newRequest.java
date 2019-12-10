/**
 * Initializes the builder and sets it up to build a new {@link HttpRequest} .
 */
public HttpRequestBuilder newRequest() {
    if (httpRequest != null) {
        throw new IllegalStateException("A new request has already been started. Call HttpRequestBuilder.build() first.");
    }
    httpRequest = Pools.obtain(HttpRequest.class);
    httpRequest.setTimeOut(defaultTimeout);
    return this;
}
