/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		joint->SetMaxMotorForce(force);
	*/
/**
 * Get the current motor force given the inverse time step, usually in N.
 */
public float getMotorForce(float invDt) {
    return jniGetMotorForce(addr, invDt);
}
