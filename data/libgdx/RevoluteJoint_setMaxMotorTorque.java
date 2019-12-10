/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		return joint->GetMotorSpeed();
	*/
/**
 * Set the maximum motor torque, usually in N-m.
 */
public void setMaxMotorTorque(float torque) {
    jniSetMaxMotorTorque(addr, torque);
}
