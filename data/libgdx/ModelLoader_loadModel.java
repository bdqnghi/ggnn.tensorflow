/**
 * Directly load the model on the calling thread. The model with not be managed by an {@link AssetManager}.
 */
public Model loadModel(final FileHandle fileHandle) {
    return loadModel(fileHandle, new TextureProvider.FileTextureProvider(), null);
}
