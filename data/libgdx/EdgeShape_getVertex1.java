public void getVertex1(Vector2 vec) {
    jniGetVertex1(addr, vertex);
    vec.x = vertex[0];
    vec.y = vertex[1];
}
