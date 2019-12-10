/*
		b2WheelJoint* joint = (b2WheelJoint*)addr;
		joint->SetSpringDampingRatio(ratio);
	*/
public float getSpringDampingRatio() {
    return jniGetSpringDampingRatio(addr);
}
