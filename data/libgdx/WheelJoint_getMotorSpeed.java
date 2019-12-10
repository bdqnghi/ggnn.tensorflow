/*
	  	b2WheelJoint* joint = (b2WheelJoint*)addr;
		joint->SetMotorSpeed(speed);
	*/
/**
 * Get the motor speed, usually in radians per second.
 */
public float getMotorSpeed() {
    return jniGetMotorSpeed(addr);
}
