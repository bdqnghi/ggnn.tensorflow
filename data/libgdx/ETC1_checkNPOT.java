private void checkNPOT() {
    if (!MathUtils.isPowerOfTwo(width) || !MathUtils.isPowerOfTwo(height)) {
        Gdx.app.debug("ETC1Data", "warning: non-power-of-two ETC1 textures may crash the driver of PowerVR GPUs");
    }
}
