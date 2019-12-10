public void removeSource(Source source) {
    DragListener dragListener = sourceListeners.remove(source);
    source.actor.removeCaptureListener(dragListener);
}
