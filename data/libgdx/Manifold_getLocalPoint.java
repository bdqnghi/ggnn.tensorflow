/*
		b2Manifold* manifold = (b2Manifold*)addr;
		values[0] = manifold->localNormal.x;
		values[1] = manifold->localNormal.y;
	*/
public Vector2 getLocalPoint() {
    jniGetLocalPoint(addr, tmpFloat);
    localPoint.set(tmpFloat[0], tmpFloat[1]);
    return localPoint;
}
