/*
	  	b2WheelJoint* joint = (b2WheelJoint*)addr;
		joint->EnableMotor(flag);
	*/
/**
 * Set the motor speed, usually in radians per second.
 */
public void setMotorSpeed(float speed) {
    jniSetMotorSpeed(addr, speed);
}
