public void loadBinary(final String url, final AssetLoaderListener<Blob> listener) {
    XMLHttpRequest request = XMLHttpRequest.create();
    request.setOnReadyStateChange(new ReadyStateChangeHandler() {

        @Override
        public void onReadyStateChange(XMLHttpRequest xhr) {
            if (xhr.getReadyState() == XMLHttpRequest.DONE) {
                if (xhr.getStatus() != 200) {
                    listener.onFailure();
                } else {
                    Int8Array data = TypedArrays.createInt8Array(xhr.getResponseArrayBuffer());
                    listener.onSuccess(new Blob(data));
                }
            }
        }
    });
    setOnProgress(request, listener);
    request.open("GET", url);
    request.setResponseType(ResponseType.ArrayBuffer);
    request.send();
}
