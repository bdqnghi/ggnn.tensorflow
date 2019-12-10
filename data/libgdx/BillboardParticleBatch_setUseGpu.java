/**
 * Sets the current align mode.
 *  It will reallocate internal data, use only when necessary.
 */
public void setUseGpu(boolean useGPU) {
    if (this.useGPU != useGPU) {
        this.useGPU = useGPU;
        initRenderData();
        allocRenderables(bufferedParticlesCount);
    }
}
