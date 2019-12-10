/*
		b2DistanceJoint* joint = (b2DistanceJoint*)addr;
		joint->SetDampingRatio( ratio );
	*/
/**
 * Set/get damping ratio.
 */
public float getDampingRatio() {
    return jniGetDampingRatio(addr);
}
