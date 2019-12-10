/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		return joint->IsMotorEnabled();
	*/
/**
 * Enable/disable the joint motor.
 */
public void enableMotor(boolean flag) {
    jniEnableMotor(addr, flag);
}
