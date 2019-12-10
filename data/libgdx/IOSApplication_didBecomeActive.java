final void didBecomeActive(UIApplication uiApp) {
    Gdx.app.debug("IOSApplication", "resumed");
    // workaround for ObjectAL crash problem
    // see: https://groups.google.com/forum/?fromgroups=#!topic/objectal-for-iphone/ubRWltp_i1Q
    OALAudioSession.sharedInstance().forceEndInterruption();
    if (config.allowIpod) {
        OALSimpleAudio.sharedInstance().setUseHardwareIfAvailable(false);
    }
    graphics.makeCurrent();
    graphics.resume();
}
