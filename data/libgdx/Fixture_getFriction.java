/*
		b2Fixture* fixture = (b2Fixture*)addr;
		return fixture->GetDensity();
	*/
/**
 * Get the coefficient of friction.
 */
public float getFriction() {
    return jniGetFriction(addr);
}
