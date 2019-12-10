/**
 * Sets the correct {@code ContentType} and encodes the given content object via {@link #json}, then sets it as the content.
 */
public HttpRequestBuilder jsonContent(Object content) {
    validate();
    httpRequest.setHeader(HttpRequestHeader.ContentType, "application/json");
    String jsonContent = json.toJson(content);
    httpRequest.setContent(jsonContent);
    return this;
}
