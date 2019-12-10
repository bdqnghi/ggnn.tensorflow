/**
 * Invalidate all managed cubemaps. This is an internal method. Do not use it!
 */
public static void invalidateAllCubemaps(Application app) {
    Array<Cubemap> managedCubemapArray = managedCubemaps.get(app);
    if (managedCubemapArray == null)
        return;
    if (assetManager == null) {
        for (int i = 0; i < managedCubemapArray.size; i++) {
            Cubemap cubemap = managedCubemapArray.get(i);
            cubemap.reload();
        }
    } else {
        // first we have to make sure the AssetManager isn't loading anything anymore,
        // otherwise the ref counting trick below wouldn't work (when a cubemap is
        // currently on the task stack of the manager.)
        assetManager.finishLoading();
        // next we go through each cubemap and reload either directly or via the
        // asset manager.
        Array<Cubemap> cubemaps = new Array<Cubemap>(managedCubemapArray);
        for (Cubemap cubemap : cubemaps) {
            String fileName = assetManager.getAssetFileName(cubemap);
            if (fileName == null) {
                cubemap.reload();
            } else {
                // get the ref count of the cubemap, then set it to 0 so we
                // can actually remove it from the assetmanager. Also set the
                // handle to zero, otherwise we might accidentially dispose
                // already reloaded cubemaps.
                final int refCount = assetManager.getReferenceCount(fileName);
                assetManager.setReferenceCount(fileName, 0);
                cubemap.glHandle = 0;
                // create the parameters, passing the reference to the cubemap as
                // well as a callback that sets the ref count.
                CubemapParameter params = new CubemapParameter();
                params.cubemapData = cubemap.getCubemapData();
                params.minFilter = cubemap.getMinFilter();
                params.magFilter = cubemap.getMagFilter();
                params.wrapU = cubemap.getUWrap();
                params.wrapV = cubemap.getVWrap();
                // special parameter which will ensure that the references stay the same.
                params.cubemap = cubemap;
                params.loadedCallback = new LoadedCallback() {

                    @Override
                    public void finishedLoading(AssetManager assetManager, String fileName, Class type) {
                        assetManager.setReferenceCount(fileName, refCount);
                    }
                };
                // unload the c, create a new gl handle then reload it.
                assetManager.unload(fileName);
                cubemap.glHandle = Gdx.gl.glGenTexture();
                assetManager.load(fileName, Cubemap.class, params);
            }
        }
        managedCubemapArray.clear();
        managedCubemapArray.addAll(cubemaps);
    }
}
