static char characterForKeyCode(int key) {
    // Map certain key codes to character codes.
    switch(key) {
        case Keys.BACKSPACE:
            return 8;
        case Keys.TAB:
            return '\t';
        case Keys.FORWARD_DEL:
            return 127;
    }
    return 0;
}
