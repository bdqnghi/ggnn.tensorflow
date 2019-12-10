/**
 * Sets vertex attributes and size
 */
public void setVertexData() {
    if (useGPU) {
        currentAttributes = GPU_ATTRIBUTES;
        currentVertexSize = GPU_VERTEX_SIZE;
    /*
			if(mode == AlignMode.ParticleDirection){
				currentAttributes = GPU_EXT_ATTRIBUTES;
				currentVertexSize = GPU_EXT_VERTEX_SIZE;
			}
			else{
				currentAttributes = GPU_ATTRIBUTES;
				currentVertexSize = GPU_VERTEX_SIZE;
			}
			 */
    } else {
        currentAttributes = CPU_ATTRIBUTES;
        currentVertexSize = CPU_VERTEX_SIZE;
    }
}
