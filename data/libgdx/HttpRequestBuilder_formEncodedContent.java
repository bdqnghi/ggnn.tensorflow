/**
 * Sets the correct {@code ContentType} and encodes the given parameter map, then sets it as the content.
 */
public HttpRequestBuilder formEncodedContent(Map<String, String> content) {
    validate();
    httpRequest.setHeader(HttpRequestHeader.ContentType, "application/x-www-form-urlencoded");
    String formEncodedContent = HttpParametersUtils.convertHttpParameters(content);
    httpRequest.setContent(formEncodedContent);
    return this;
}
