/*
		b2Contact* contact = (b2Contact*)addr;
		contact->SetFriction(friction);
	*/
/**
 * Get the friction.
 */
public float getFriction() {
    return jniGetFriction(addr);
}
