/*
		b2EdgeShape* edge = (b2EdgeShape*)addr;
		return edge->m_hasVertex0;
	*/
public void setHasVertex0(boolean hasVertex0) {
    jniSetHasVertex0(addr, hasVertex0);
}
