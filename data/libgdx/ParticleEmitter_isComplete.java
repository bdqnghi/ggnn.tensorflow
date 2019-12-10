public boolean isComplete() {
    if (continuous)
        return false;
    if (delayTimer < delay)
        return false;
    return durationTimer >= duration && activeCount == 0;
}
