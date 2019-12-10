/**
 * @see HttpRequest#setFollowRedirects(boolean)
 */
public HttpRequestBuilder followRedirects(boolean followRedirects) {
    validate();
    httpRequest.setFollowRedirects(followRedirects);
    return this;
}
