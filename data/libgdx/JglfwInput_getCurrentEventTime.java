public long getCurrentEventTime() {
    return processorQueue != null ? processorQueue.getCurrentEventTime() : currentEventTime;
}
