private Vector3 translateScreenToIso(Vector2 vec) {
    screenPos.set(vec.x, vec.y, 0);
    screenPos.mul(invIsotransform);
    return screenPos;
}
