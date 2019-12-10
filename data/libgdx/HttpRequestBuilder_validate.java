private void validate() {
    if (httpRequest == null) {
        throw new IllegalStateException("A new request has not been started yet. Call HttpRequestBuilder.newRequest() first.");
    }
}
