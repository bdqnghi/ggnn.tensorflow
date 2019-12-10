/*
		b2PulleyJoint* joint = (b2PulleyJoint*)addr;
		return joint->GetLengthA();
	*/
/**
 * Get the current length of the segment attached to body2.
 */
public float getLength2() {
    return jniGetLength2(addr);
}
