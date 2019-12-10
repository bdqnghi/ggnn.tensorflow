/**
 * Called when a task throws an exception during loading. The default implementation rethrows the exception. A subclass may
 * supress the default implementation when loading assets where loading failure is recoverable.
 */
protected void taskFailed(AssetDescriptor assetDesc, RuntimeException ex) {
    throw ex;
}
