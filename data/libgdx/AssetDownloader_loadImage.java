public void loadImage(final String url, final String mimeType, final AssetLoaderListener<ImageElement> listener) {
    if (useBrowserCache || useInlineBase64) {
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
                final ImageElement image = createImage();
                hookImgListener(image, new ImgEventListener() {

                    @Override
                    public void onEvent(NativeEvent event) {
                        if (event.getType().equals("error"))
                            listener.onFailure();
                        else
                            listener.onSuccess(image);
                    }
                });
                if (isUseInlineBase64()) {
                    image.setSrc("data:" + mimeType + ";base64," + result.toBase64());
                } else {
                    image.setSrc(url);
                }
            }
        });
    } else {
        final ImageElement image = createImage();
        hookImgListener(image, new ImgEventListener() {

            @Override
            public void onEvent(NativeEvent event) {
                if (event.getType().equals("error"))
                    listener.onFailure();
                else
                    listener.onSuccess(image);
            }
        });
        image.setSrc(url);
    }
}
