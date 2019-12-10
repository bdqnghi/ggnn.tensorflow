/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		joint->SetLimits(lower, upper );
	*/
/**
 * Is the joint motor enabled?
 */
public boolean isMotorEnabled() {
    return jniIsMotorEnabled(addr);
}
