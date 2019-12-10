/*
		b2Manifold* manifold = (b2Manifold*)addr;
		return manifold->type;
	*/
public int getPointCount() {
    return jniGetPointCount(addr);
}
