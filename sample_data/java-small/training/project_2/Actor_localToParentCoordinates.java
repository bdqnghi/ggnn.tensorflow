/**
 * Transforms the specified point in the actor's coordinates to be in the parent's coordinates.
 */
public Vector2 localToParentCoordinates(Vector2 localCoords) {
    final float rotation = -this.rotation;
    final float scaleX = this.scaleX;
    final float scaleY = this.scaleY;
    final float x = this.x;
    final float y = this.y;
    if (rotation == 0) {
        if (scaleX == 1 && scaleY == 1) {
            localCoords.x += x;
            localCoords.y += y;
        } else {
            final float originX = this.originX;
            final float originY = this.originY;
            localCoords.x = (localCoords.x - originX) * scaleX + originX + x;
            localCoords.y = (localCoords.y - originY) * scaleY + originY + y;
        }
    } else {
        final float cos = (float) Math.cos(rotation * MathUtils.degreesToRadians);
        final float sin = (float) Math.sin(rotation * MathUtils.degreesToRadians);
        final float originX = this.originX;
        final float originY = this.originY;
        final float tox = (localCoords.x - originX) * scaleX;
        final float toy = (localCoords.y - originY) * scaleY;
        localCoords.x = (tox * cos + toy * sin) + originX + x;
        localCoords.y = (tox * -sin + toy * cos) + originY + y;
    }
    return localCoords;
}
