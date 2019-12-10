/*
		b2Shape* shape = (b2Shape*)addr;
		shape->m_radius = radius;
	*/
/**
 * Needs to be called when the shape is no longer used, e.g. after a fixture was created based on the shape.
 */
public void dispose() {
    jniDispose(addr);
}
