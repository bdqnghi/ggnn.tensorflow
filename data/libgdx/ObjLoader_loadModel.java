/**
 * Directly load the model on the calling thread. The model with not be managed by an {@link AssetManager}.
 */
public Model loadModel(final FileHandle fileHandle, boolean flipV) {
    return loadModel(fileHandle, new ObjLoaderParameters(flipV));
}
