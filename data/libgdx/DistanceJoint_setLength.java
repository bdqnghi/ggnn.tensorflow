/*
		b2DistanceJoint* joint = (b2DistanceJoint*)addr;
		anchor[0] = joint->GetLocalAnchorB().x;
		anchor[1] = joint->GetLocalAnchorB().y;
	*/
/**
 * Set/get the natural length. Manipulating the length can lead to non-physical behavior when the frequency is zero.
 */
public void setLength(float length) {
    jniSetLength(addr, length);
}
