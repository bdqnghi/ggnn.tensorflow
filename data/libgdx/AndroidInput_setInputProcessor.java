public void setInputProcessor(InputProcessor processor) {
    synchronized (this) {
        this.processor = processor;
    }
}
