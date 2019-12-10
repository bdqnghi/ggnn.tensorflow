public boolean executeRunnables() {
    synchronized (runnables) {
        for (int i = runnables.size - 1; i >= 0; i--) executedRunnables.add(runnables.get(i));
        runnables.clear();
    }
    if (executedRunnables.size == 0)
        return false;
    for (int i = executedRunnables.size - 1; i >= 0; i--) executedRunnables.removeIndex(i).run();
    return true;
}
