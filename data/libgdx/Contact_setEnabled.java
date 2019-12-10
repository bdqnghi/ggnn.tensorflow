/*
		b2Contact* contact = (b2Contact*)addr;
		return contact->IsTouching();
	*/
/**
 * Enable/disable this contact. This can be used inside the pre-solve contact listener. The contact is only disabled for the
 * current time step (or sub-step in continuous collisions).
 */
public void setEnabled(boolean flag) {
    jniSetEnabled(addr, flag);
}
