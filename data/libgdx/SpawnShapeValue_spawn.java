public final Vector3 spawn(Vector3 vector, float percent) {
    spawnAux(vector, percent);
    if (xOffsetValue.active)
        vector.x += xOffsetValue.newLowValue();
    if (yOffsetValue.active)
        vector.y += yOffsetValue.newLowValue();
    if (zOffsetValue.active)
        vector.z += zOffsetValue.newLowValue();
    return vector;
}
