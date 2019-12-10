/*
		b2Fixture* fixture = (b2Fixture*)addr;
		fixture->SetSensor(sensor);
	*/
/**
 * Is this fixture a sensor (non-solid)?
 * @return the true if the shape is a sensor.
 */
public boolean isSensor() {
    return jniIsSensor(addr);
}
