/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		return joint->IsMotorEnabled();
	*/
/**
 * Enable/disable the joint motor.
 */
public void enableMotor(boolean flag) {
    jniEnableMotor(addr, flag);
}
