/*
	  	b2WheelJoint* joint = (b2WheelJoint*)addr;
		return joint->IsMotorEnabled();
	*/
/**
 * Enable/disable the joint motor.
 */
public void enableMotor(boolean flag) {
    jniEnableMotor(addr, flag);
}
