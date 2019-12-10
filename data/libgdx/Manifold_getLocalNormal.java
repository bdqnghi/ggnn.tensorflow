/*
	  	b2Manifold* manifold = (b2Manifold*)addr;
		return manifold->pointCount;
	*/
public Vector2 getLocalNormal() {
    jniGetLocalNormal(addr, tmpFloat);
    localNormal.set(tmpFloat[0], tmpFloat[1]);
    return localNormal;
}
