/*
		b2RopeJoint* joint = (b2RopeJoint*)addr;
		anchor[0] = joint->GetLocalAnchorB().x;
		anchor[1] = joint->GetLocalAnchorB().y;
	*/
/**
 * Get the maximum length of the rope.
 */
public float getMaxLength() {
    return jniGetMaxLength(addr);
}
