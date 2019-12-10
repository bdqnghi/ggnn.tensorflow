/**
 * Disposes all resources associated with the texture
 */
public void dispose() {
    // removal from the asset manager.
    if (glHandle == 0)
        return;
    delete();
    if (data.isManaged())
        if (managedTextures.get(Gdx.app) != null)
            managedTextures.get(Gdx.app).removeValue(this, true);
}
