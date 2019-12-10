@Override
public boolean keyDown(int keycode) {
    if (keycode != Input.Keys.SPACE)
        return false;
    float scale = MathUtils.random(0.75f, 1.25f);
    float angle = MathUtils.random(1, 360);
    spriteCache.beginCache(normalCacheID);
    for (int i = 0; i < sprites2.length; i += 6) spriteCache.add(texture2, sprites2[i], sprites2[i + 1], 16, 16, 32, 32, scale, scale, angle, 0, 0, 32, 32, false, false);
    for (int i = 0; i < sprites.length; i += 6) spriteCache.add(texture, sprites[i], sprites[i + 1], 16, 16, 32, 32, scale, scale, angle, 0, 0, 32, 32, false, false);
    spriteCache.endCache();
    return false;
}
