/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		return joint->GetUpperLimit();
	*/
/**
 * Set the joint limits, usually in meters.
 */
public void setLimits(float lower, float upper) {
    jniSetLimits(addr, lower, upper);
}
