/*
	  	b2Contact* contact = (b2Contact*)addr;
		return contact->GetTangentSpeed();
	*/
/**
 * Set the tangent speed.
 */
public void setTangentSpeed(float speed) {
    jniSetTangentSpeed(addr, speed);
}
