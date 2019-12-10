synchronized void removeFromConnectionsAndListeners(final HttpRequest httpRequest) {
    connections.remove(httpRequest);
    listeners.remove(httpRequest);
}
