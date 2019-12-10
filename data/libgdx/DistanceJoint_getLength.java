/*
		b2DistanceJoint* joint = (b2DistanceJoint*)addr;
		joint->SetLength( length );
	*/
/**
 * Set/get the natural length. Manipulating the length can lead to non-physical behavior when the frequency is zero.
 */
public float getLength() {
    return jniGetLength(addr);
}
