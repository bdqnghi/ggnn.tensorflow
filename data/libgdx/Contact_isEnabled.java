/*
		b2Contact* contact = (b2Contact*)addr;
		contact->SetEnabled(flag);
	*/
/**
 * Has this contact been disabled?
 */
public boolean isEnabled() {
    return jniIsEnabled(addr);
}
