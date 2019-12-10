/*
		b2EdgeShape* edge = (b2EdgeShape*)addr;
		return edge->m_hasVertex3;
	*/
public void setHasVertex3(boolean hasVertex3) {
    jniSetHasVertex3(addr, hasVertex3);
}
