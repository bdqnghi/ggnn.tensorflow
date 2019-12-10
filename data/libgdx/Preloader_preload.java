public void preload(final String assetFileUrl, final PreloaderCallback callback) {
    final AssetDownloader loader = new AssetDownloader();
    loader.loadText(baseUrl + assetFileUrl, new AssetLoaderListener<String>() {

        @Override
        public void onProgress(double amount) {
        }

        @Override
        public void onFailure() {
            callback.error(assetFileUrl);
        }

        @Override
        public void onSuccess(String result) {
            String[] lines = result.split("\n");
            Array<Asset> assets = new Array<Asset>(lines.length);
            for (String line : lines) {
                String[] tokens = line.split(":");
                if (tokens.length != 4) {
                    throw new GdxRuntimeException("Invalid assets description file.");
                }
                AssetType type = AssetType.Text;
                if (tokens[0].equals("i"))
                    type = AssetType.Image;
                if (tokens[0].equals("b"))
                    type = AssetType.Binary;
                if (tokens[0].equals("a"))
                    type = AssetType.Audio;
                if (tokens[0].equals("d"))
                    type = AssetType.Directory;
                long size = Long.parseLong(tokens[2]);
                if (type == AssetType.Audio && !loader.isUseBrowserCache()) {
                    size = 0;
                }
                assets.add(new Asset(tokens[1].trim(), type, size, tokens[3]));
            }
            final PreloaderState state = new PreloaderState(assets);
            for (int i = 0; i < assets.size; i++) {
                final Asset asset = assets.get(i);
                if (contains(asset.url)) {
                    asset.loaded = asset.size;
                    asset.succeed = true;
                    continue;
                }
                loader.load(baseUrl + asset.url, asset.type, asset.mimeType, new AssetLoaderListener<Object>() {

                    @Override
                    public void onProgress(double amount) {
                        asset.loaded = (long) amount;
                        callback.update(state);
                    }

                    @Override
                    public void onFailure() {
                        asset.failed = true;
                        callback.error(asset.url);
                        callback.update(state);
                    }

                    @Override
                    public void onSuccess(Object result) {
                        switch(asset.type) {
                            case Text:
                                texts.put(asset.url, (String) result);
                                break;
                            case Image:
                                images.put(asset.url, (ImageElement) result);
                                break;
                            case Binary:
                                binaries.put(asset.url, (Blob) result);
                                break;
                            case Audio:
                                audio.put(asset.url, null);
                                break;
                            case Directory:
                                directories.put(asset.url, null);
                                break;
                        }
                        asset.succeed = true;
                        callback.update(state);
                    }
                });
            }
            callback.update(state);
        }
    });
}
