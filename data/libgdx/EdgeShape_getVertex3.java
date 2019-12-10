/*
		b2EdgeShape* edge = (b2EdgeShape*)addr;
		edge->m_vertex0.x = x;
		edge->m_vertex0.y = y;
	*/
public void getVertex3(Vector2 vec) {
    jniGetVertex3(addr, vertex);
    vec.x = vertex[0];
    vec.y = vertex[1];
}
