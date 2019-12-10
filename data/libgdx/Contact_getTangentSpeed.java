/*
	  	b2Contact* contact = (b2Contact*)addr;
		contact->ResetRestitution();
	*/
/**
 * Get the tangent speed.
 */
public float getTangentSpeed() {
    return jniGetTangentSpeed(addr);
}
