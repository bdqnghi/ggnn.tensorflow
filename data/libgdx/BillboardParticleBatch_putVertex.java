/*
	//Required + Color + Rotation + Direction
	private static void putVertex( float[] vertices,  int offset, float x, float y, float z, float u, float v, float scaleX, float scaleY,  float cosRotation, float sinRotation, float r, float g, float b, float a, Vector3 direction) {
		//Position
		vertices[offset + GPU_EXT_POSITION_OFFSET] = x;
		vertices[offset + GPU_EXT_POSITION_OFFSET+1] = y;
		vertices[offset + GPU_EXT_POSITION_OFFSET+2] = z;
		//UV
		vertices[offset + GPU_EXT_UV_OFFSET] = u;
		vertices[offset + GPU_EXT_UV_OFFSET+1] = v;
		//Scale
		vertices[offset + GPU_EXT_SIZE_ROTATION_OFFSET] = scaleX;
		vertices[offset + GPU_EXT_SIZE_ROTATION_OFFSET+1] = scaleY;
		vertices[offset + GPU_EXT_SIZE_ROTATION_OFFSET+2] = cosRotation;
		vertices[offset + GPU_EXT_SIZE_ROTATION_OFFSET+3] = sinRotation;
		//Color
		vertices[offset + GPU_EXT_COLOR_OFFSET] = r;
		vertices[offset + GPU_EXT_COLOR_OFFSET+1] = g;
		vertices[offset + GPU_EXT_COLOR_OFFSET+2] = b;
		vertices[offset + GPU_EXT_COLOR_OFFSET+3] = a;
		//Direction
		vertices[offset + GPU_EXT_DIRECTION_OFFSET] = direction.x;
		vertices[offset + GPU_EXT_DIRECTION_OFFSET +1] = direction.y;
		vertices[offset + GPU_EXT_DIRECTION_OFFSET +2] = direction.z;
	}
	 */
// CPU
// Required
private static void putVertex(float[] vertices, int offset, Vector3 p, float u, float v, float r, float g, float b, float a) {
    // Position
    vertices[offset + CPU_POSITION_OFFSET] = p.x;
    vertices[offset + CPU_POSITION_OFFSET + 1] = p.y;
    vertices[offset + CPU_POSITION_OFFSET + 2] = p.z;
    // UV
    vertices[offset + CPU_UV_OFFSET] = u;
    vertices[offset + CPU_UV_OFFSET + 1] = v;
    // Color
    vertices[offset + CPU_COLOR_OFFSET] = r;
    vertices[offset + CPU_COLOR_OFFSET + 1] = g;
    vertices[offset + CPU_COLOR_OFFSET + 2] = b;
    vertices[offset + CPU_COLOR_OFFSET + 3] = a;
}
