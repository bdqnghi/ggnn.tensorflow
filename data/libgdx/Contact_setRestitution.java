/*
	  	b2Contact* contact = (b2Contact*)addr;
		contact->ResetFriction();
	*/
/**
 * Override the default restitution mixture. You can call this in b2ContactListener::PreSolve. The value persists until you set
 * or reset.
 */
public void setRestitution(float restitution) {
    jniSetRestitution(addr, restitution);
}
