/*
	  	b2WheelJoint* joint = (b2WheelJoint*)addr;
		return joint->GetJointTranslation();
	*/
/**
 * Get the current joint translation speed, usually in meters per second.
 */
public float getJointSpeed() {
    return jniGetJointSpeed(addr);
}
