/*
		b2PulleyJoint* joint = (b2PulleyJoint*)addr;
		return joint->GetLengthB();
	*/
/**
 * Get the pulley ratio.
 */
public float getRatio() {
    return jniGetRatio(addr);
}
