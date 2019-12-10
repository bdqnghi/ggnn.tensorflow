/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		joint->EnableLimit(flag);
	*/
/**
 * Get the lower joint limit, usually in meters.
 */
public float getLowerLimit() {
    return jniGetLowerLimit(addr);
}
