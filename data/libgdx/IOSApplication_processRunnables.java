public void processRunnables() {
    synchronized (runnables) {
        executedRunnables.clear();
        executedRunnables.addAll(runnables);
        runnables.clear();
    }
    for (int i = 0; i < executedRunnables.size; i++) {
        try {
            executedRunnables.get(i).run();
        } catch (Throwable t) {
            t.printStackTrace();
        }
    }
}
