/*
	  	b2Contact* contact = (b2Contact*)addr;
		contact->SetRestitution(restitution);
	*/
/**
 * Get the restitution.
 */
public float getRestitution() {
    return jniGetRestitution(addr);
}
