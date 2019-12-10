/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		joint->SetMotorSpeed(speed);
	*/
/**
 * Get the motor speed, usually in meters per second.
 */
public float getMotorSpeed() {
    return jniGetMotorSpeed(addr);
}
