synchronized HttpResponseListener getFromListeners(HttpRequest httpRequest) {
    HttpResponseListener httpResponseListener = listeners.get(httpRequest);
    return httpResponseListener;
}
