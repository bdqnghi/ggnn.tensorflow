/*
		b2Shape* shape = (b2Shape*)addr;
		return shape->m_radius;
	*/
/**
 * Sets the radius of this shape
 */
public void setRadius(float radius) {
    jniSetRadius(addr, radius);
}
