/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		return joint->GetJointSpeed();
	*/
/**
 * Is the joint limit enabled?
 */
public boolean isLimitEnabled() {
    return jniIsLimitEnabled(addr);
}
