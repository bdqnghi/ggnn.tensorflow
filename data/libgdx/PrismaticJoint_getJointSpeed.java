/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		return joint->GetJointTranslation();
	*/
/**
 * Get the current joint translation speed, usually in meters per second.
 */
public float getJointSpeed() {
    return jniGetJointSpeed(addr);
}
