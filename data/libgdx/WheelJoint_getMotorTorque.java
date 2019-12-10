/*
		b2WheelJoint* joint = (b2WheelJoint*)addr;
		return joint->GetMaxMotorTorque();
	*/
/**
 * Get the current motor torque given the inverse time step, usually in N-m.
 */
public float getMotorTorque(float invDt) {
    return jniGetMotorTorque(addr, invDt);
}
