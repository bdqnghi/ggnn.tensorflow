@Override
public void dispose() {
    renderer.dispose();
    texture.dispose();
    for (SpriteCache cache : caches) cache.dispose();
}
