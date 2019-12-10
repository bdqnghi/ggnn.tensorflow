@Override
public void cancelHttpRequest(HttpRequest httpRequest) {
    HttpResponseListener httpResponseListener = listeners.get(httpRequest);
    Request request = requests.get(httpRequest);
    if (httpResponseListener != null && request != null) {
        request.cancel();
        httpResponseListener.cancelled();
        requests.remove(httpRequest);
        listeners.remove(httpRequest);
    }
}
