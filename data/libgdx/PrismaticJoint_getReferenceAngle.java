/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		return joint->GetMaxMotorForce();
	*/
/**
 * Get the reference angle.
 */
public float getReferenceAngle() {
    return jniGetReferenceAngle(addr);
}
