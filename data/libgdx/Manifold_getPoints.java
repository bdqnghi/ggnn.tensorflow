/*
		b2Manifold* manifold = (b2Manifold*)addr;
		values[0] = manifold->localPoint.x;
		values[1] = manifold->localPoint.y;
	*/
public ManifoldPoint[] getPoints() {
    int count = jniGetPointCount(addr);
    for (int i = 0; i < count; i++) {
        int contactID = jniGetPoint(addr, tmpFloat, i);
        ManifoldPoint point = points[i];
        point.contactID = contactID;
        point.localPoint.set(tmpFloat[0], tmpFloat[1]);
        point.normalImpulse = tmpFloat[2];
        point.tangentImpulse = tmpFloat[3];
    }
    return points;
}
