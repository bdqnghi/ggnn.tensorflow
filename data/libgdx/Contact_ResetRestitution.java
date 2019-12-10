/*
	  	b2Contact* contact = (b2Contact*)addr;
		return contact->GetRestitution();
	*/
/**
 * Reset the restitution to the default value.
 */
public void ResetRestitution() {
    jniResetRestitution(addr);
}
