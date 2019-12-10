/*
	  	b2WheelJoint* joint = (b2WheelJoint*)addr;
		return joint->GetMotorTorque(invDt);
	*/
/**
 * Set/Get the spring frequency in hertz. Setting the frequency to zero disables the spring.
 */
public void setSpringFrequencyHz(float hz) {
    jniSetSpringFrequencyHz(addr, hz);
}
