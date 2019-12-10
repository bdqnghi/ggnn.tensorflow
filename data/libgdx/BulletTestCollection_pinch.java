@Override
public boolean pinch(Vector2 initialFirstPointer, Vector2 initialSecondPointer, Vector2 firstPointer, Vector2 secondPointer) {
    return tests[testIndex].pinch(initialFirstPointer, initialSecondPointer, firstPointer, secondPointer);
}
