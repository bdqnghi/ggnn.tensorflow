/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		return joint->GetLowerLimit();
	*/
/**
 * Get the upper joint limit, usually in meters.
 */
public float getUpperLimit() {
    return jniGetUpperLimit(addr);
}
