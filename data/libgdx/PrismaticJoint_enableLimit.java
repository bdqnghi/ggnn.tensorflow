/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		return joint->IsLimitEnabled();
	*/
/**
 * Enable/disable the joint limit.
 */
public void enableLimit(boolean flag) {
    jniEnableLimit(addr, flag);
}
