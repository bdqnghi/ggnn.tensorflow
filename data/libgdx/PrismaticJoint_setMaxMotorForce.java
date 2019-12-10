/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		return joint->GetMotorSpeed();
	*/
/**
 * Set the maximum motor force, usually in N.
 */
public void setMaxMotorForce(float force) {
    jniSetMaxMotorForce(addr, force);
}
