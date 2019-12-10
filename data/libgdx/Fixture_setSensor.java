/*
		b2Fixture* fixture = (b2Fixture*)addr;
		return (jlong)fixture->GetShape();
	*/
/**
 * Set if this fixture is a sensor.
 */
public void setSensor(boolean sensor) {
    jniSetSensor(addr, sensor);
}
