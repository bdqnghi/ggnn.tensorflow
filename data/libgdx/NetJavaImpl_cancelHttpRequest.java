public void cancelHttpRequest(HttpRequest httpRequest) {
    HttpResponseListener httpResponseListener = getFromListeners(httpRequest);
    if (httpResponseListener != null) {
        httpResponseListener.cancelled();
        removeFromConnectionsAndListeners(httpRequest);
    }
}
