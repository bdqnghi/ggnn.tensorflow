/**
 * Sets the {@code Authorization} header via the Base64 encoded username and password.
 */
public HttpRequestBuilder basicAuthentication(String username, String password) {
    validate();
    httpRequest.setHeader(HttpRequestHeader.Authorization, "Basic " + Base64Coder.encodeString(username + ":" + password));
    return this;
}
