/*
		b2EdgeShape* edge = (b2EdgeShape*)addr;
		vertex[0] = edge->m_vertex2.x;
		vertex[1] = edge->m_vertex2.y;
	*/
public void getVertex0(Vector2 vec) {
    jniGetVertex0(addr, vertex);
    vec.x = vertex[0];
    vec.y = vertex[1];
}
