public boolean scrolled(InputEvent event, float x, float y, int amount) {
    resetFade();
    if (scrollY)
        setScrollY(amountY + getMouseWheelY() * amount);
    else if (// 
    scrollX)
        setScrollX(amountX + getMouseWheelX() * amount);
    else
        return false;
    return true;
}
