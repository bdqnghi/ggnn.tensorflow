@Override
public Map<String, List<String>> getHeaders() {
    Map<String, List<String>> headers = new HashMap<String, List<String>>();
    Header[] responseHeaders = response.getHeaders();
    for (int i = 0; i < responseHeaders.length; i++) {
        Header header = responseHeaders[i];
        if (header != null) {
            String headerName = responseHeaders[i].getName();
            List<String> headerValues = headers.get(headerName);
            if (headerValues == null) {
                headerValues = new ArrayList<String>();
                headers.put(headerName, headerValues);
            }
            headerValues.add(responseHeaders[i].getValue());
        }
    }
    return headers;
}
