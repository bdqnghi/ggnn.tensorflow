/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		joint->EnableLimit(flag);
	*/
/**
 * Get the lower joint limit in radians.
 */
public float getLowerLimit() {
    return jniGetLowerLimit(addr);
}
