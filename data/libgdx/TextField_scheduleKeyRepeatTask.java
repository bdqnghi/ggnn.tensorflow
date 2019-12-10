protected void scheduleKeyRepeatTask(int keycode) {
    if (!keyRepeatTask.isScheduled() || keyRepeatTask.keycode != keycode) {
        keyRepeatTask.keycode = keycode;
        keyRepeatTask.cancel();
        Timer.schedule(keyRepeatTask, keyRepeatInitialTime, keyRepeatTime);
    }
}
