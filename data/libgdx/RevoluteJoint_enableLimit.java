/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		return joint->IsLimitEnabled();
	*/
/**
 * Enable/disable the joint limit.
 */
public void enableLimit(boolean flag) {
    jniEnableLimit(addr, flag);
}
