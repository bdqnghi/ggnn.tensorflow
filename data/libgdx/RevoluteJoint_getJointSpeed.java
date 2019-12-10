/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		return joint->GetJointAngle();
	*/
/**
 * Get the current joint angle speed in radians per second.
 */
public float getJointSpeed() {
    return jniGetJointSpeed(addr);
}
