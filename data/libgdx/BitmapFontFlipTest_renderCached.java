private void renderCached() {
    cache5.setColors(red);
    cache5.draw(spriteBatch);
    cache1.draw(spriteBatch);
    if (red.a > 0.6f)
        return;
    cache2.draw(spriteBatch);
    cache3.draw(spriteBatch);
    cache4.draw(spriteBatch);
}
