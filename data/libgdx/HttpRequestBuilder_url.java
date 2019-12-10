/**
 * The {@link #baseUrl} will automatically be added as a prefix to the given URL.
 *
 * @see HttpRequest#setUrl(String)
 */
public HttpRequestBuilder url(String url) {
    validate();
    httpRequest.setUrl(baseUrl + url);
    return this;
}
