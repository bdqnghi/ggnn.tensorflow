/**
 * Updates the current task on the top of the task stack.
 * @return true if the asset is loaded or the task was cancelled.
 */
private boolean updateTask() {
    AssetLoadingTask task = tasks.peek();
    boolean complete = true;
    try {
        complete = task.cancel || task.update();
    } catch (RuntimeException ex) {
        task.cancel = true;
        taskFailed(task.assetDesc, ex);
    }
    // if the task has been cancelled or has finished loading
    if (complete) {
        // increase the number of loaded assets and pop the task from the stack
        if (tasks.size() == 1)
            loaded++;
        tasks.pop();
        if (task.cancel)
            return true;
        addAsset(task.assetDesc.fileName, task.assetDesc.type, task.getAsset());
        // otherwise, if a listener was found in the parameter invoke it
        if (task.assetDesc.params != null && task.assetDesc.params.loadedCallback != null) {
            task.assetDesc.params.loadedCallback.finishedLoading(this, task.assetDesc.fileName, task.assetDesc.type);
        }
        long endTime = TimeUtils.nanoTime();
        log.debug("Loaded: " + (endTime - task.startTime) / 1000000f + "ms " + task.assetDesc);
        return true;
    }
    return false;
}
