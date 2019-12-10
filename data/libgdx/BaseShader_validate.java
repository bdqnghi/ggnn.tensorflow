public boolean validate(final BaseShader shader, final int inputID, final Renderable renderable) {
    final long matFlags = (renderable != null && renderable.material != null) ? renderable.material.getMask() : 0;
    final long envFlags = (renderable != null && renderable.environment != null) ? renderable.environment.getMask() : 0;
    return ((matFlags & materialMask) == materialMask) && ((envFlags & environmentMask) == environmentMask) && (((matFlags | envFlags) & overallMask) == overallMask);
}
