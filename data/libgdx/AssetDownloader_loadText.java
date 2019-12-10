public void loadText(String url, final AssetLoaderListener<String> listener) {
    XMLHttpRequest request = XMLHttpRequest.create();
    request.setOnReadyStateChange(new ReadyStateChangeHandler() {

        @Override
        public void onReadyStateChange(XMLHttpRequest xhr) {
            if (xhr.getReadyState() == XMLHttpRequest.DONE) {
                if (xhr.getStatus() != 200) {
                    listener.onFailure();
                } else {
                    listener.onSuccess(xhr.getResponseText());
                }
            }
        }
    });
    setOnProgress(request, listener);
    request.open("GET", url);
    request.setRequestHeader("Content-Type", "text/plain; charset=utf-8");
    request.send();
}
