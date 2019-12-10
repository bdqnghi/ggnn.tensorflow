@Override
public void renderTileLayer(TiledMapTileLayer layer) {
    final float color = Color.toFloatBits(1, 1, 1, layer.getOpacity());
    final int layerWidth = layer.getWidth();
    final int layerHeight = layer.getHeight();
    final float layerTileWidth = layer.getTileWidth() * unitScale;
    final float layerTileHeight = layer.getTileHeight() * unitScale;
    final int col1 = Math.max(0, (int) (cacheBounds.x / layerTileWidth));
    final int col2 = Math.min(layerWidth, (int) ((cacheBounds.x + cacheBounds.width + layerTileWidth) / layerTileWidth));
    final int row1 = Math.max(0, (int) (cacheBounds.y / layerTileHeight));
    final int row2 = Math.min(layerHeight, (int) ((cacheBounds.y + cacheBounds.height + layerTileHeight) / layerTileHeight));
    canCacheMoreN = row2 < layerHeight;
    canCacheMoreE = col2 < layerWidth;
    canCacheMoreW = col1 > 0;
    canCacheMoreS = row1 > 0;
    float[] vertices = this.vertices;
    for (int row = row2; row >= row1; row--) {
        for (int col = col1; col < col2; col++) {
            final TiledMapTileLayer.Cell cell = layer.getCell(col, row);
            if (cell == null)
                continue;
            final TiledMapTile tile = cell.getTile();
            if (tile == null)
                continue;
            count++;
            final boolean flipX = cell.getFlipHorizontally();
            final boolean flipY = cell.getFlipVertically();
            final int rotations = cell.getRotation();
            final TextureRegion region = tile.getTextureRegion();
            final Texture texture = region.getTexture();
            final float x1 = col * layerTileWidth + tile.getOffsetX() * unitScale;
            final float y1 = row * layerTileHeight + tile.getOffsetY() * unitScale;
            final float x2 = x1 + region.getRegionWidth() * unitScale;
            final float y2 = y1 + region.getRegionHeight() * unitScale;
            final float adjustX = 0.5f / texture.getWidth();
            final float adjustY = 0.5f / texture.getHeight();
            final float u1 = region.getU() + adjustX;
            final float v1 = region.getV2() - adjustY;
            final float u2 = region.getU2() - adjustX;
            final float v2 = region.getV() + adjustY;
            vertices[X1] = x1;
            vertices[Y1] = y1;
            vertices[C1] = color;
            vertices[U1] = u1;
            vertices[V1] = v1;
            vertices[X2] = x1;
            vertices[Y2] = y2;
            vertices[C2] = color;
            vertices[U2] = u1;
            vertices[V2] = v2;
            vertices[X3] = x2;
            vertices[Y3] = y2;
            vertices[C3] = color;
            vertices[U3] = u2;
            vertices[V3] = v2;
            vertices[X4] = x2;
            vertices[Y4] = y1;
            vertices[C4] = color;
            vertices[U4] = u2;
            vertices[V4] = v1;
            if (flipX) {
                float temp = vertices[U1];
                vertices[U1] = vertices[U3];
                vertices[U3] = temp;
                temp = vertices[U2];
                vertices[U2] = vertices[U4];
                vertices[U4] = temp;
            }
            if (flipY) {
                float temp = vertices[V1];
                vertices[V1] = vertices[V3];
                vertices[V3] = temp;
                temp = vertices[V2];
                vertices[V2] = vertices[V4];
                vertices[V4] = temp;
            }
            if (rotations != 0) {
                switch(rotations) {
                    case Cell.ROTATE_90:
                        {
                            float tempV = vertices[V1];
                            vertices[V1] = vertices[V2];
                            vertices[V2] = vertices[V3];
                            vertices[V3] = vertices[V4];
                            vertices[V4] = tempV;
                            float tempU = vertices[U1];
                            vertices[U1] = vertices[U2];
                            vertices[U2] = vertices[U3];
                            vertices[U3] = vertices[U4];
                            vertices[U4] = tempU;
                            break;
                        }
                    case Cell.ROTATE_180:
                        {
                            float tempU = vertices[U1];
                            vertices[U1] = vertices[U3];
                            vertices[U3] = tempU;
                            tempU = vertices[U2];
                            vertices[U2] = vertices[U4];
                            vertices[U4] = tempU;
                            float tempV = vertices[V1];
                            vertices[V1] = vertices[V3];
                            vertices[V3] = tempV;
                            tempV = vertices[V2];
                            vertices[V2] = vertices[V4];
                            vertices[V4] = tempV;
                            break;
                        }
                    case Cell.ROTATE_270:
                        {
                            float tempV = vertices[V1];
                            vertices[V1] = vertices[V4];
                            vertices[V4] = vertices[V3];
                            vertices[V3] = vertices[V2];
                            vertices[V2] = tempV;
                            float tempU = vertices[U1];
                            vertices[U1] = vertices[U4];
                            vertices[U4] = vertices[U3];
                            vertices[U3] = vertices[U2];
                            vertices[U2] = tempU;
                            break;
                        }
                }
            }
            spriteCache.add(texture, vertices, 0, NUM_VERTICES);
        }
    }
}
