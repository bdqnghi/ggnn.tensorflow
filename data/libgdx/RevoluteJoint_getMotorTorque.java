/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		joint->SetMaxMotorTorque(torque);
	*/
/**
 * Get the current motor torque, usually in N-m.
 */
public float getMotorTorque(float invDt) {
    return jniGetMotorTorque(addr, invDt);
}
