/*
		b2DistanceJoint* joint = (b2DistanceJoint*)addr;
		return joint->GetLength();
	*/
/**
 * Set/get frequency in Hz.
 */
public void setFrequency(float hz) {
    jniSetFrequency(addr, hz);
}
