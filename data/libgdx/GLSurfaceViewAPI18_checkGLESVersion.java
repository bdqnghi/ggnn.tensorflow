private void checkGLESVersion() {
    if (!mGLESVersionCheckComplete) {
        // mGLESVersion = SystemProperties.getInt(
        // "ro.opengles.version",
        // ConfigurationInfo.GL_ES_VERSION_UNDEFINED);
        // SystemProperties is a hidden class that is not part of the public SDK
        // so we force GL ES version to 2.0
        mGLESVersion = kGLES_20;
        if (mGLESVersion >= kGLES_20) {
            mMultipleGLESContextsAllowed = true;
        }
        if (LOG_SURFACE) {
            Log.w(TAG, "checkGLESVersion mGLESVersion =" + " " + mGLESVersion + " mMultipleGLESContextsAllowed = " + mMultipleGLESContextsAllowed);
        }
        mGLESVersionCheckComplete = true;
    }
}
