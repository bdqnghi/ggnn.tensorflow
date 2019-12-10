static public boolean ctrl(int keycode) {
    if (isMac)
        return keycode == Keys.SYM;
    else
        return keycode == Keys.CONTROL_LEFT || keycode == Keys.CONTROL_RIGHT;
}
