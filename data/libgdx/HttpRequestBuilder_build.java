/**
 * Returns the {@link HttpRequest} that has been setup by this builder so far. After using the request, it should be returned
 * to the pool via {@code Pools.free(request)}.
 */
public HttpRequest build() {
    validate();
    HttpRequest request = httpRequest;
    httpRequest = null;
    return request;
}
