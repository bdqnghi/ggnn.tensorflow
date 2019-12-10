@Override
public boolean fling(float velocityX, float velocityY, int button) {
    if (tests[testIndex].fling(velocityX, velocityY, button) == false)
        next();
    return true;
}
