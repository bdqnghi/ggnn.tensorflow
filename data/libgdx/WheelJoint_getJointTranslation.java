/*
		b2WheelJoint* joint = (b2WheelJoint*)addr;
		anchor[0] = joint->GetLocalAxisA().x;
		anchor[1] = joint->GetLocalAxisA().y;
	*/
/**
 * Get the current joint translation, usually in meters.
 */
public float getJointTranslation() {
    return jniGetJointTranslation(addr);
}
