/*
		b2RevoluteJoint* joint = (b2RevoluteJoint*)addr;
		anchor[0] = joint->GetLocalAnchorB().x;
		anchor[1] = joint->GetLocalAnchorB().y;
	*/
/**
 * Get the current motor torque, usually in N-m.
 */
public float getReferenceAngle() {
    return jniGetReferenceAngle(addr);
}
