/*
		b2Contact* contact = (b2Contact*)addr;
		return contact->GetChildIndexB();
	*/
/**
 * Override the default friction mixture. You can call this in b2ContactListener::PreSolve. This value persists until set or
 * reset.
 */
public void setFriction(float friction) {
    jniSetFriction(addr, friction);
}
