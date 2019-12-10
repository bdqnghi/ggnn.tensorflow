/**
 * This method will initialise the sync method by setting initial values for sleepDurations/yieldDurations and nextFrame.
 *
 * If running on windows it will start the sleep timer fix.
 */
private static void initialise() {
    initialised = true;
    sleepDurations.init(1000 * 1000);
    yieldDurations.init((int) (-(System.nanoTime() - System.nanoTime()) * 1.333));
    nextFrame = System.nanoTime();
    String osName = System.getProperty("os.name");
    if (osName.startsWith("Win")) {
        // On windows the sleep functions can be highly inaccurate by
        // over 10ms making in unusable. However it can be forced to
        // be a bit more accurate by running a separate sleeping daemon
        // thread.
        Thread timerAccuracyThread = new Thread(new Runnable() {

            public void run() {
                try {
                    Thread.sleep(Long.MAX_VALUE);
                } catch (Exception e) {
                }
            }
        });
        timerAccuracyThread.setName("JGLFW Sync");
        timerAccuracyThread.setDaemon(true);
        timerAccuracyThread.start();
    }
}
