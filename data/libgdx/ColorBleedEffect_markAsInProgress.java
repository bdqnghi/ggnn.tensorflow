void markAsInProgress() {
    index--;
    changing[changingSize] = removeIndex(index);
    changingSize++;
}
