/*
		b2Fixture* fixture = (b2Fixture*)addr;
		fixture->SetFriction(friction);
	*/
/**
 * Get the coefficient of restitution.
 */
public float getRestitution() {
    return jniGetRestitution(addr);
}
