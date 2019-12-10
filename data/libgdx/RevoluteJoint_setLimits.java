/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		return joint->GetUpperLimit();
	*/
/**
 * Set the joint limits in radians.
 * @param upper
 */
public void setLimits(float lower, float upper) {
    jniSetLimits(addr, lower, upper);
}
