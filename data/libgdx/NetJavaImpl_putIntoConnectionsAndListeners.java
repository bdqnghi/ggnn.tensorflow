synchronized void putIntoConnectionsAndListeners(final HttpRequest httpRequest, final HttpResponseListener httpResponseListener, final HttpURLConnection connection) {
    connections.put(httpRequest, connection);
    listeners.put(httpRequest, httpResponseListener);
}
