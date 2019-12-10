/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		joint->EnableMotor(flag);
	*/
/**
 * Set the motor speed, usually in meters per second.
 */
public void setMotorSpeed(float speed) {
    jniSetMotorSpeed(addr, speed);
}
