static public RunnableAction run(Runnable runnable) {
    RunnableAction action = action(RunnableAction.class);
    action.setRunnable(runnable);
    return action;
}
