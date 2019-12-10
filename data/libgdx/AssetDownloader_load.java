public void load(String url, AssetType type, String mimeType, AssetLoaderListener<?> listener) {
    switch(type) {
        case Text:
            loadText(url, (AssetLoaderListener<String>) listener);
            break;
        case Image:
            loadImage(url, mimeType, (AssetLoaderListener<ImageElement>) listener);
            break;
        case Binary:
            loadBinary(url, (AssetLoaderListener<Blob>) listener);
            break;
        case Audio:
            loadAudio(url, (AssetLoaderListener<Void>) listener);
            break;
        case Directory:
            listener.onSuccess(null);
            break;
        default:
            throw new GdxRuntimeException("Unsupported asset type " + type);
    }
}
