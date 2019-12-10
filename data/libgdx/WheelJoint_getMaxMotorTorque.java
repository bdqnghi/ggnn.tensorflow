/*
	  	b2WheelJoint* joint = (b2WheelJoint*)addr;
		joint->SetMaxMotorTorque(torque);
	*/
public float getMaxMotorTorque() {
    return jniGetMaxMotorTorque(addr);
}
