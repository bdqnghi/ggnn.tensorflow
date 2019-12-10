@Override
public void setView(Matrix4 projection, float x, float y, float width, float height) {
    spriteCache.setProjectionMatrix(projection);
    x -= maxTileWidth * unitScale;
    y -= maxTileHeight * unitScale;
    width += maxTileWidth * 2 * unitScale;
    height += maxTileHeight * 2 * unitScale;
    viewBounds.set(x, y, width, height);
    if (// 
    (canCacheMoreW && viewBounds.x < cacheBounds.x - tolerance) || // 
    (canCacheMoreS && viewBounds.y < cacheBounds.y - tolerance) || // 
    (canCacheMoreE && viewBounds.x + viewBounds.width > cacheBounds.x + cacheBounds.width + tolerance) || // 
    (canCacheMoreN && viewBounds.y + viewBounds.height > cacheBounds.y + cacheBounds.height + tolerance))
        cached = false;
}
