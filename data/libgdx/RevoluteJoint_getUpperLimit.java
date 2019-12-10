/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		return joint->GetLowerLimit();
	*/
/**
 * Get the upper joint limit in radians.
 */
public float getUpperLimit() {
    return jniGetUpperLimit(addr);
}
