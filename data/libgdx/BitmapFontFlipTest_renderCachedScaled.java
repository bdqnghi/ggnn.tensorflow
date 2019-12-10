private void renderCachedScaled() {
    cacheScaled5.setColors(red);
    cacheScaled5.draw(spriteBatch);
    cacheScaled1.draw(spriteBatch);
    if (red.a > 0.6f)
        return;
    cacheScaled2.draw(spriteBatch);
    cacheScaled3.draw(spriteBatch);
    cacheScaled4.draw(spriteBatch);
}
