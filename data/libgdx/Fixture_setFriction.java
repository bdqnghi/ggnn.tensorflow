/*
		b2Fixture* fixture = (b2Fixture*)addr;
		return fixture->GetFriction();
	*/
/**
 * Set the coefficient of friction.
 */
public void setFriction(float friction) {
    jniSetFriction(addr, friction);
}
