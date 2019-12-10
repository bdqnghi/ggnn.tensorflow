/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		joint->SetMotorSpeed(speed);
	*/
/**
 * Get the motor speed in radians per second.
 */
public float getMotorSpeed() {
    return jniGetMotorSpeed(addr);
}
