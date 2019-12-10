/**
 * Disposes the {@link TextureAtlas} and all {@link Disposable} resources in the skin.
 */
public void dispose() {
    if (atlas != null)
        atlas.dispose();
    for (ObjectMap<String, Object> entry : resources.values()) {
        for (Object resource : entry.values()) if (resource instanceof Disposable)
            ((Disposable) resource).dispose();
    }
}
