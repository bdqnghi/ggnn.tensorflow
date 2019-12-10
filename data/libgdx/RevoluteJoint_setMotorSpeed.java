/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		joint->EnableMotor(flag);
	*/
/**
 * Set the motor speed in radians per second.
 */
public void setMotorSpeed(float speed) {
    jniSetMotorSpeed(addr, speed);
}
