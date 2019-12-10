/*
		b2WheelJoint* joint = (b2WheelJoint*)addr;
		return joint->GetSpringFrequencyHz();
	*/
/**
 * Set/Get the spring damping ratio
 */
public void setSpringDampingRatio(float ratio) {
    jniSetSpringDampingRatio(addr, ratio);
}
