@Override
public InputProcessor getInputProcessor() {
    if (mockInputProcessor == null) {
        mockInputProcessor = new InputAdapter();
    }
    return mockInputProcessor;
}
