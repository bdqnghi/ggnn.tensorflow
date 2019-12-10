@Override
public boolean keyTyped(char character) {
    tests[testIndex].keyTyped(character);
    return false;
}
