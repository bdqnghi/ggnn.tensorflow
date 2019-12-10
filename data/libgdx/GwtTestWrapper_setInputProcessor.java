@Override
public void setInputProcessor(InputProcessor processor) {
    multiplexer.removeProcessor(lastProcessor);
    multiplexer.addProcessor(processor);
    lastProcessor = processor;
}
