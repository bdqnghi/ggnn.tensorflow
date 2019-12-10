/*
		b2Shape* shape = (b2Shape*)addr;
		switch(shape->m_type) {
		case b2Shape::e_circle: return 0;
		case b2Shape::e_edge: return 1;
		case b2Shape::e_polygon: return 2;
		case b2Shape::e_chain: return 3;
		default: return -1;
		}
	*/
/**
 * Get the number of child primitives.
 */
public int getChildCount() {
    return jniGetChildCount(addr);
}
