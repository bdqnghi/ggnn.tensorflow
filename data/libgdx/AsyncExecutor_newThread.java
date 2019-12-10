@Override
public Thread newThread(Runnable r) {
    Thread thread = new Thread(r, "AsynchExecutor-Thread");
    thread.setDaemon(true);
    return thread;
}
