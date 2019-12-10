/**
 * Disposes all resources associated with the cubemap
 */
@Override
public void dispose() {
    // removal from the asset manager.
    if (glHandle == 0)
        return;
    delete();
    if (data.isManaged())
        if (managedCubemaps.get(Gdx.app) != null)
            managedCubemaps.get(Gdx.app).removeValue(this, true);
}
