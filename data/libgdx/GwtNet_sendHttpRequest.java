@Override
public void sendHttpRequest(final HttpRequest httpRequest, final HttpResponseListener httpResultListener) {
    if (httpRequest.getUrl() == null) {
        httpResultListener.failed(new GdxRuntimeException("can't process a HTTP request without URL set"));
        return;
    }
    final String method = httpRequest.getMethod();
    final String value = httpRequest.getContent();
    final boolean valueInBody = method.equalsIgnoreCase(HttpMethods.POST) || method.equals(HttpMethods.PUT);
    RequestBuilder builder;
    String url = httpRequest.getUrl();
    if (method.equalsIgnoreCase(HttpMethods.GET)) {
        if (value != null) {
            url += "?" + value;
        }
        builder = new RequestBuilder(RequestBuilder.GET, url);
    } else if (method.equalsIgnoreCase(HttpMethods.POST)) {
        builder = new RequestBuilder(RequestBuilder.POST, url);
    } else if (method.equalsIgnoreCase(HttpMethods.DELETE)) {
        if (value != null) {
            url += "?" + value;
        }
        builder = new RequestBuilder(RequestBuilder.DELETE, url);
    } else if (method.equalsIgnoreCase(HttpMethods.PUT)) {
        builder = new RequestBuilder(RequestBuilder.PUT, url);
    } else {
        throw new GdxRuntimeException("Unsupported HTTP Method");
    }
    Map<String, String> content = httpRequest.getHeaders();
    Set<String> keySet = content.keySet();
    for (String name : keySet) {
        builder.setHeader(name, content.get(name));
    }
    builder.setTimeoutMillis(httpRequest.getTimeOut());
    try {
        Request request = builder.sendRequest(valueInBody ? value : null, new RequestCallback() {

            @Override
            public void onResponseReceived(Request request, Response response) {
                httpResultListener.handleHttpResponse(new HttpClientResponse(response));
                requests.remove(httpRequest);
                listeners.remove(httpRequest);
            }

            @Override
            public void onError(Request request, Throwable exception) {
                httpResultListener.failed(exception);
                requests.remove(httpRequest);
                listeners.remove(httpRequest);
            }
        });
        requests.put(httpRequest, request);
        listeners.put(httpRequest, httpResultListener);
    } catch (Throwable e) {
        httpResultListener.failed(e);
    }
}
