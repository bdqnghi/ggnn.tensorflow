/**
 * When true, <code>Runtime.getRuntime().halt(0);</code> is used when the JVM shuts down. This prevents Swing shutdown hooks
 * from causing a deadlock and keeping the JVM alive indefinitely. Default is true.
 */
public void setHaltOnShutdown(boolean halt) {
    if (halt) {
        if (shutdownHook != null)
            return;
        shutdownHook = new Thread() {

            public void run() {
                // Because fuck you, deadlock causing Swing shutdown hooks.
                Runtime.getRuntime().halt(0);
            }
        };
        Runtime.getRuntime().addShutdownHook(shutdownHook);
    } else if (shutdownHook != null) {
        Runtime.getRuntime().removeShutdownHook(shutdownHook);
        shutdownHook = null;
    }
}
