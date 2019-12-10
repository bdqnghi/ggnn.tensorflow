/*
		b2Fixture* fixture = (b2Fixture*)addr;
		fixture->SetDensity(density);
	*/
/**
 * Get the density of this fixture.
 */
public float getDensity() {
    return jniGetDensity(addr);
}
