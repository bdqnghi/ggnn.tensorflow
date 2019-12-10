/*
		b2DistanceJoint* joint = (b2DistanceJoint*)addr;
		return joint->GetFrequency();
	*/
/**
 * Set/get damping ratio.
 */
public void setDampingRatio(float ratio) {
    jniSetDampingRatio(addr, ratio);
}
