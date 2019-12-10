/*
		b2EdgeShape* edge = (b2EdgeShape*)addr; 
		vertex[0] = edge->m_vertex1.x;
		vertex[1] = edge->m_vertex1.y;
	*/
public void getVertex2(Vector2 vec) {
    jniGetVertex2(addr, vertex);
    vec.x = vertex[0];
    vec.y = vertex[1];
}
