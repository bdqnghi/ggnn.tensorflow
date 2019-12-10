/*
		b2PulleyJoint* joint = (b2PulleyJoint*)addr;
		anchor[0] = joint->GetGroundAnchorB().x;
		anchor[1] = joint->GetGroundAnchorB().y;
	*/
/**
 * Get the current length of the segment attached to body1.
 */
public float getLength1() {
    return jniGetLength1(addr);
}
