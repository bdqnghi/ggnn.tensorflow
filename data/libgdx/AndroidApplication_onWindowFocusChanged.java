@Override
public void onWindowFocusChanged(boolean hasFocus) {
    super.onWindowFocusChanged(hasFocus);
    useImmersiveMode(this.useImmersiveMode);
    hideStatusBar(this.hideStatusBar);
    if (hasFocus) {
        this.wasFocusChanged = 1;
        if (this.isWaitingForAudio) {
            this.audio.resume();
            this.isWaitingForAudio = false;
        }
    } else {
        this.wasFocusChanged = 0;
    }
}
