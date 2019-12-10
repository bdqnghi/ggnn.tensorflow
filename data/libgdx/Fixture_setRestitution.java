/*
		b2Fixture* fixture = (b2Fixture*)addr;
		return fixture->GetRestitution();
	*/
/**
 * Set the coefficient of restitution.
 */
public void setRestitution(float restitution) {
    jniSetRestitution(addr, restitution);
}
