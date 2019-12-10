/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		return joint->GetReferenceAngle();
	*/
public float getMaxMotorTorque() {
    return jniGetMaxMotorTorque(addr);
}
