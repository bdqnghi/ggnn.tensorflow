/**
 * Converts the coordinates given in the parent's coordinate system to this actor's coordinate system.
 */
public Vector2 parentToLocalCoordinates(Vector2 parentCoords) {
    final float rotation = this.rotation;
    final float scaleX = this.scaleX;
    final float scaleY = this.scaleY;
    final float childX = x;
    final float childY = y;
    if (rotation == 0) {
        if (scaleX == 1 && scaleY == 1) {
            parentCoords.x -= childX;
            parentCoords.y -= childY;
        } else {
            final float originX = this.originX;
            final float originY = this.originY;
            parentCoords.x = (parentCoords.x - childX - originX) / scaleX + originX;
            parentCoords.y = (parentCoords.y - childY - originY) / scaleY + originY;
        }
    } else {
        final float cos = (float) Math.cos(rotation * MathUtils.degreesToRadians);
        final float sin = (float) Math.sin(rotation * MathUtils.degreesToRadians);
        final float originX = this.originX;
        final float originY = this.originY;
        final float tox = parentCoords.x - childX - originX;
        final float toy = parentCoords.y - childY - originY;
        parentCoords.x = (tox * cos + toy * sin) / scaleX + originX;
        parentCoords.y = (tox * -sin + toy * cos) / scaleY + originY;
    }
    return parentCoords;
}
