/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		return joint->GetJointSpeed();
	*/
/**
 * Is the joint limit enabled?
 */
public boolean isLimitEnabled() {
    return jniIsLimitEnabled(addr);
}
