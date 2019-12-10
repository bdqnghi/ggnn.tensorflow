/*
		b2Contact* contact = (b2Contact*)addr;
		return contact->GetFriction();
	*/
/**
 * Reset the friction mixture to the default value.
 */
public void resetFriction() {
    jniResetFriction(addr);
}
