@Override
public void onConfigurationChanged(Configuration config) {
    super.onConfigurationChanged(config);
    boolean keyboardAvailable = false;
    if (config.hardKeyboardHidden == Configuration.HARDKEYBOARDHIDDEN_NO)
        keyboardAvailable = true;
    input.keyboardAvailable = keyboardAvailable;
}
