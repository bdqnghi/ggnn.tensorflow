/*
		b2WheelJoint* joint = (b2WheelJoint*)addr;
		joint->SetSpringFrequencyHz(hz);
	*/
public float getSpringFrequencyHz() {
    return jniGetSpringFrequencyHz(addr);
}
