/*
		b2DistanceJoint* joint = (b2DistanceJoint*)addr;
		joint->SetFrequency( hz );
	*/
/**
 * Set/get frequency in Hz.
 */
public float getFrequency() {
    return jniGetFrequency(addr);
}
