/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		return joint->GetMotorForce(invDt);
	*/
/**
 * Get the max motor force, usually in N.
 */
public float getMaxMotorForce() {
    return jniGetMaxMotorForce(addr);
}
