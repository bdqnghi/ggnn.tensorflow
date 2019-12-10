public int getFreePointerIndex() {
    int len = realId.length;
    for (int i = 0; i < len; i++) {
        if (realId[i] == -1)
            return i;
    }
    realId = resize(realId);
    touchX = resize(touchX);
    touchY = resize(touchY);
    deltaX = resize(deltaX);
    deltaY = resize(deltaY);
    touched = resize(touched);
    button = resize(button);
    return len;
}
