/**
 * Sets the current align mode.
 *  It will reallocate internal data, use only when necessary.
 */
public void setAlignMode(AlignMode mode) {
    if (mode != this.mode) {
        this.mode = mode;
        if (useGPU) {
            initRenderData();
            allocRenderables(bufferedParticlesCount);
        }
    }
}
