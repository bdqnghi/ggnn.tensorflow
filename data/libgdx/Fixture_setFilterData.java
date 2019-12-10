/*
		b2Fixture* fixture = (b2Fixture*)addr;
		return fixture->IsSensor();
	*/
/**
 * Set the contact filtering data. This will not update contacts until the next time step when either parent body is active and
 * awake. This automatically calls Refilter.
 */
public void setFilterData(Filter filter) {
    jniSetFilterData(addr, filter.categoryBits, filter.maskBits, filter.groupIndex);
}
