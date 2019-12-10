/*
	  	b2WheelJoint* joint = (b2WheelJoint*)addr;
		return joint->GetMotorSpeed();
	*/
/**
 * Set/Get the maximum motor force, usually in N-m.
 */
public void setMaxMotorTorque(float torque) {
    jniSetMaxMotorTorque(addr, torque);
}
