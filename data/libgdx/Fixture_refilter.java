/*
		b2Fixture* fixture = (b2Fixture*)addr;
		unsigned short* filterOut = (unsigned short*)filter;
		b2Filter f = fixture->GetFilterData();
		filterOut[0] = f.maskBits;
		filterOut[1] = f.categoryBits;
		filterOut[2] = f.groupIndex;
	*/
/**
 * Call this if you want to establish collision that was previously disabled by b2ContactFilter::ShouldCollide.
 */
public void refilter() {
    jniRefilter(addr);
}
