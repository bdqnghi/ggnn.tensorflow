public EGLConfig chooseConfig(EGL10 egl, EGLDisplay display, EGLConfig[] configs) {
    EGLConfig best = null;
    EGLConfig bestAA = null;
    // default back to 565 when no exact match found
    EGLConfig safe = null;
    for (EGLConfig config : configs) {
        int d = findConfigAttrib(egl, display, config, EGL10.EGL_DEPTH_SIZE, 0);
        int s = findConfigAttrib(egl, display, config, EGL10.EGL_STENCIL_SIZE, 0);
        // We need at least mDepthSize and mStencilSize bits
        if (d < mDepthSize || s < mStencilSize)
            continue;
        // We want an *exact* match for red/green/blue/alpha
        int r = findConfigAttrib(egl, display, config, EGL10.EGL_RED_SIZE, 0);
        int g = findConfigAttrib(egl, display, config, EGL10.EGL_GREEN_SIZE, 0);
        int b = findConfigAttrib(egl, display, config, EGL10.EGL_BLUE_SIZE, 0);
        int a = findConfigAttrib(egl, display, config, EGL10.EGL_ALPHA_SIZE, 0);
        // Match RGB565 as a fallback
        if (safe == null && r == 5 && g == 6 && b == 5 && a == 0) {
            safe = config;
        }
        // isn't set already.
        if (best == null && r == mRedSize && g == mGreenSize && b == mBlueSize && a == mAlphaSize) {
            best = config;
            // if no AA is requested we can bail out here.
            if (mNumSamples == 0) {
                break;
            }
        }
        // now check for MSAA support
        int hasSampleBuffers = findConfigAttrib(egl, display, config, EGL10.EGL_SAMPLE_BUFFERS, 0);
        int numSamples = findConfigAttrib(egl, display, config, EGL10.EGL_SAMPLES, 0);
        // We take the first sort of matching config, thank you.
        if (bestAA == null && hasSampleBuffers == 1 && numSamples >= mNumSamples && r == mRedSize && g == mGreenSize && b == mBlueSize && a == mAlphaSize) {
            bestAA = config;
            continue;
        }
        // for this to work we need to call the extension glCoverageMaskNV which is not
        // exposed in the Android bindings. We'd have to link agains the NVidia SDK and
        // that is simply not going to happen.
        // // still no luck, let's try CSAA support
        hasSampleBuffers = findConfigAttrib(egl, display, config, EGL_COVERAGE_BUFFERS_NV, 0);
        numSamples = findConfigAttrib(egl, display, config, EGL_COVERAGE_SAMPLES_NV, 0);
        // We take the first sort of matching config, thank you.
        if (bestAA == null && hasSampleBuffers == 1 && numSamples >= mNumSamples && r == mRedSize && g == mGreenSize && b == mBlueSize && a == mAlphaSize) {
            bestAA = config;
            continue;
        }
    }
    if (bestAA != null)
        return bestAA;
    else if (best != null)
        return best;
    else
        return safe;
}
