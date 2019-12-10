public void sendHttpRequest(final HttpRequest httpRequest, final HttpResponseListener httpResponseListener) {
    if (httpRequest.getUrl() == null) {
        httpResponseListener.failed(new GdxRuntimeException("can't process a HTTP request without URL set"));
        return;
    }
    try {
        final String method = httpRequest.getMethod();
        URL url;
        if (method.equalsIgnoreCase(HttpMethods.GET)) {
            String queryString = "";
            String value = httpRequest.getContent();
            if (value != null && !"".equals(value))
                queryString = "?" + value;
            url = new URL(httpRequest.getUrl() + queryString);
        } else {
            url = new URL(httpRequest.getUrl());
        }
        final HttpURLConnection connection = (HttpURLConnection) url.openConnection();
        // should be enabled to upload data.
        final boolean doingOutPut = method.equalsIgnoreCase(HttpMethods.POST) || method.equalsIgnoreCase(HttpMethods.PUT);
        connection.setDoOutput(doingOutPut);
        connection.setDoInput(true);
        connection.setRequestMethod(method);
        HttpURLConnection.setFollowRedirects(httpRequest.getFollowRedirects());
        putIntoConnectionsAndListeners(httpRequest, httpResponseListener, connection);
        // Headers get set regardless of the method
        for (Map.Entry<String, String> header : httpRequest.getHeaders().entrySet()) connection.addRequestProperty(header.getKey(), header.getValue());
        // Set Timeouts
        connection.setConnectTimeout(httpRequest.getTimeOut());
        connection.setReadTimeout(httpRequest.getTimeOut());
        asyncExecutor.submit(new AsyncTask<Void>() {

            @Override
            public Void call() throws Exception {
                try {
                    // Set the content for POST and PUT (GET has the information embedded in the URL)
                    if (doingOutPut) {
                        // we probably need to use the content as stream here instead of using it as a string.
                        String contentAsString = httpRequest.getContent();
                        if (contentAsString != null) {
                            OutputStreamWriter writer = new OutputStreamWriter(connection.getOutputStream());
                            try {
                                writer.write(contentAsString);
                            } finally {
                                StreamUtils.closeQuietly(writer);
                            }
                        } else {
                            InputStream contentAsStream = httpRequest.getContentStream();
                            if (contentAsStream != null) {
                                OutputStream os = connection.getOutputStream();
                                try {
                                    StreamUtils.copyStream(contentAsStream, os);
                                } finally {
                                    StreamUtils.closeQuietly(os);
                                }
                            }
                        }
                    }
                    connection.connect();
                    final HttpClientResponse clientResponse = new HttpClientResponse(connection);
                    try {
                        HttpResponseListener listener = getFromListeners(httpRequest);
                        if (listener != null) {
                            listener.handleHttpResponse(clientResponse);
                        }
                        removeFromConnectionsAndListeners(httpRequest);
                    } finally {
                        connection.disconnect();
                    }
                } catch (final Exception e) {
                    connection.disconnect();
                    try {
                        httpResponseListener.failed(e);
                    } finally {
                        removeFromConnectionsAndListeners(httpRequest);
                    }
                }
                return null;
            }
        });
    } catch (Exception e) {
        try {
            httpResponseListener.failed(e);
        } finally {
            removeFromConnectionsAndListeners(httpRequest);
        }
        return;
    }
}
