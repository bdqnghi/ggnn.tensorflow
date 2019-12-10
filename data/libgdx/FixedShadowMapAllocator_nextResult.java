@Override
public ShadowMapRegion nextResult(BaseLight light) {
    if (!allocating) {
        throw new GdxRuntimeException("Allocator must begin before call");
    }
    int nbOnLine = (int) Math.round(Math.sqrt(mapQuantity));
    int i = currentMap % nbOnLine;
    int j = currentMap / nbOnLine;
    int sizeMap = size / nbOnLine;
    result.x = i * sizeMap;
    result.y = j * sizeMap;
    result.width = sizeMap;
    result.height = sizeMap;
    if (result.x >= size || result.y >= size)
        return null;
    currentMap += 1;
    return result;
}
