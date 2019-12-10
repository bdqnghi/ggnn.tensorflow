@Override
public boolean isTouched(int pointer) {
    if (pointer == 0)
        return touchDown;
    else
        return false;
}
