/**
 * Invalidate all managed textures. This is an internal method. Do not use it!
 */
public static void invalidateAllTextures(Application app) {
    Array<Texture> managedTextureArray = managedTextures.get(app);
    if (managedTextureArray == null)
        return;
    if (assetManager == null) {
        for (int i = 0; i < managedTextureArray.size; i++) {
            Texture texture = managedTextureArray.get(i);
            texture.reload();
        }
    } else {
        // first we have to make sure the AssetManager isn't loading anything anymore,
        // otherwise the ref counting trick below wouldn't work (when a texture is
        // currently on the task stack of the manager.)
        assetManager.finishLoading();
        // next we go through each texture and reload either directly or via the
        // asset manager.
        Array<Texture> textures = new Array<Texture>(managedTextureArray);
        for (Texture texture : textures) {
            String fileName = assetManager.getAssetFileName(texture);
            if (fileName == null) {
                texture.reload();
            } else {
                // get the ref count of the texture, then set it to 0 so we
                // can actually remove it from the assetmanager. Also set the
                // handle to zero, otherwise we might accidentially dispose
                // already reloaded textures.
                final int refCount = assetManager.getReferenceCount(fileName);
                assetManager.setReferenceCount(fileName, 0);
                texture.glHandle = 0;
                // create the parameters, passing the reference to the texture as
                // well as a callback that sets the ref count.
                TextureParameter params = new TextureParameter();
                params.textureData = texture.getTextureData();
                params.minFilter = texture.getMinFilter();
                params.magFilter = texture.getMagFilter();
                params.wrapU = texture.getUWrap();
                params.wrapV = texture.getVWrap();
                // not sure about this?
                params.genMipMaps = texture.data.useMipMaps();
                // special parameter which will ensure that the references stay the same.
                params.texture = texture;
                params.loadedCallback = new LoadedCallback() {

                    @Override
                    public void finishedLoading(AssetManager assetManager, String fileName, Class type) {
                        assetManager.setReferenceCount(fileName, refCount);
                    }
                };
                // unload the texture, create a new gl handle then reload it.
                assetManager.unload(fileName);
                texture.glHandle = Gdx.gl.glGenTexture();
                assetManager.load(fileName, Texture.class, params);
            }
        }
        managedTextureArray.clear();
        managedTextureArray.addAll(textures);
    }
}
