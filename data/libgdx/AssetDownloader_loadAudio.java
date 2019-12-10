public void loadAudio(String url, final AssetLoaderListener<Void> listener) {
    if (useBrowserCache) {
        loadBinary(url, new AssetLoaderListener<Blob>() {

            @Override
            public void onProgress(double amount) {
                listener.onProgress(amount);
            }

            @Override
            public void onFailure() {
                listener.onFailure();
            }

            @Override
            public void onSuccess(Blob result) {
                listener.onSuccess(null);
            }
        });
    } else {
        listener.onSuccess(null);
    }
}
