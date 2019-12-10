public void addProcessor(InputProcessor processor) {
    if (processor == null)
        throw new NullPointerException("processor cannot be null");
    processors.add(processor);
}
