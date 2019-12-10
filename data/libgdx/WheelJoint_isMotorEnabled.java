/*
	  	b2WheelJoint* joint = (b2WheelJoint*)addr;
		return joint->GetJointSpeed();
	*/
/**
 * Is the joint motor enabled?
 */
public boolean isMotorEnabled() {
    return jniIsMotorEnabled(addr);
}
