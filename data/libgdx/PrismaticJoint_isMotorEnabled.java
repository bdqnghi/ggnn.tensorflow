/*
		b2PrismaticJoint* joint = (b2PrismaticJoint*)addr;
		joint->SetLimits(lower, upper );
	*/
/**
 * Is the joint motor enabled?
 */
public boolean isMotorEnabled() {
    return jniIsMotorEnabled(addr);
}
