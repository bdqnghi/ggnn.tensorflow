@Override
public void reset() {
    httpMethod = null;
    url = null;
    headers.clear();
    timeOut = 0;
    content = null;
    contentStream = null;
    contentLength = 0;
    followRedirects = true;
}
