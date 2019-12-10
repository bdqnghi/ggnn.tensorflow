final void willEnterForeground(UIApplication uiApp) {
    // workaround for ObjectAL crash problem
    // see: https://groups.google.com/forum/?fromgroups=#!topic/objectal-for-iphone/ubRWltp_i1Q
    OALAudioSession.sharedInstance().forceEndInterruption();
}
