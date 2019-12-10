/*
		b2RopeJoint* rope = (b2RopeJoint*)addr;
		return rope->GetMaxLength();
	*/
/**
 * Set the maximum length of the rope.
 */
public void setMaxLength(float length) {
    jniSetMaxLength(addr, length);
}
