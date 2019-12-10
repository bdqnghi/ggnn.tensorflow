/**
 * @return a human readable representation of the keycode. The returned value can be used in
 *         {@link Input.Keys#valueOf(String)}
 */
public static String toString(int keycode) {
    if (keycode < 0)
        throw new IllegalArgumentException("keycode cannot be negative, keycode: " + keycode);
    if (keycode > 255)
        throw new IllegalArgumentException("keycode cannot be greater than 255, keycode: " + keycode);
    switch(keycode) {
        // META* variables should not be used with this method.
        case UNKNOWN:
            return "Unknown";
        case SOFT_LEFT:
            return "Soft Left";
        case SOFT_RIGHT:
            return "Soft Right";
        case HOME:
            return "Home";
        case BACK:
            return "Back";
        case CALL:
            return "Call";
        case ENDCALL:
            return "End Call";
        case NUM_0:
            return "0";
        case NUM_1:
            return "1";
        case NUM_2:
            return "2";
        case NUM_3:
            return "3";
        case NUM_4:
            return "4";
        case NUM_5:
            return "5";
        case NUM_6:
            return "6";
        case NUM_7:
            return "7";
        case NUM_8:
            return "8";
        case NUM_9:
            return "9";
        case STAR:
            return "*";
        case POUND:
            return "#";
        case UP:
            return "Up";
        case DOWN:
            return "Down";
        case LEFT:
            return "Left";
        case RIGHT:
            return "Right";
        case CENTER:
            return "Center";
        case VOLUME_UP:
            return "Volume Up";
        case VOLUME_DOWN:
            return "Volume Down";
        case POWER:
            return "Power";
        case CAMERA:
            return "Camera";
        case CLEAR:
            return "Clear";
        case A:
            return "A";
        case B:
            return "B";
        case C:
            return "C";
        case D:
            return "D";
        case E:
            return "E";
        case F:
            return "F";
        case G:
            return "G";
        case H:
            return "H";
        case I:
            return "I";
        case J:
            return "J";
        case K:
            return "K";
        case L:
            return "L";
        case M:
            return "M";
        case N:
            return "N";
        case O:
            return "O";
        case P:
            return "P";
        case Q:
            return "Q";
        case R:
            return "R";
        case S:
            return "S";
        case T:
            return "T";
        case U:
            return "U";
        case V:
            return "V";
        case W:
            return "W";
        case X:
            return "X";
        case Y:
            return "Y";
        case Z:
            return "Z";
        case COMMA:
            return ",";
        case PERIOD:
            return ".";
        case ALT_LEFT:
            return "L-Alt";
        case ALT_RIGHT:
            return "R-Alt";
        case SHIFT_LEFT:
            return "L-Shift";
        case SHIFT_RIGHT:
            return "R-Shift";
        case TAB:
            return "Tab";
        case SPACE:
            return "Space";
        case SYM:
            return "SYM";
        case EXPLORER:
            return "Explorer";
        case ENVELOPE:
            return "Envelope";
        case ENTER:
            return "Enter";
        case DEL:
            // also BACKSPACE
            return "Delete";
        case GRAVE:
            return "`";
        case MINUS:
            return "-";
        case EQUALS:
            return "=";
        case LEFT_BRACKET:
            return "[";
        case RIGHT_BRACKET:
            return "]";
        case BACKSLASH:
            return "\\";
        case SEMICOLON:
            return ";";
        case APOSTROPHE:
            return "'";
        case SLASH:
            return "/";
        case AT:
            return "@";
        case NUM:
            return "Num";
        case HEADSETHOOK:
            return "Headset Hook";
        case FOCUS:
            return "Focus";
        case PLUS:
            return "Plus";
        case MENU:
            return "Menu";
        case NOTIFICATION:
            return "Notification";
        case SEARCH:
            return "Search";
        case MEDIA_PLAY_PAUSE:
            return "Play/Pause";
        case MEDIA_STOP:
            return "Stop Media";
        case MEDIA_NEXT:
            return "Next Media";
        case MEDIA_PREVIOUS:
            return "Prev Media";
        case MEDIA_REWIND:
            return "Rewind";
        case MEDIA_FAST_FORWARD:
            return "Fast Forward";
        case MUTE:
            return "Mute";
        case PAGE_UP:
            return "Page Up";
        case PAGE_DOWN:
            return "Page Down";
        case PICTSYMBOLS:
            return "PICTSYMBOLS";
        case SWITCH_CHARSET:
            return "SWITCH_CHARSET";
        case BUTTON_A:
            return "A Button";
        case BUTTON_B:
            return "B Button";
        case BUTTON_C:
            return "C Button";
        case BUTTON_X:
            return "X Button";
        case BUTTON_Y:
            return "Y Button";
        case BUTTON_Z:
            return "Z Button";
        case BUTTON_L1:
            return "L1 Button";
        case BUTTON_R1:
            return "R1 Button";
        case BUTTON_L2:
            return "L2 Button";
        case BUTTON_R2:
            return "R2 Button";
        case BUTTON_THUMBL:
            return "Left Thumb";
        case BUTTON_THUMBR:
            return "Right Thumb";
        case BUTTON_START:
            return "Start";
        case BUTTON_SELECT:
            return "Select";
        case BUTTON_MODE:
            return "Button Mode";
        case FORWARD_DEL:
            return "Forward Delete";
        case CONTROL_LEFT:
            return "L-Ctrl";
        case CONTROL_RIGHT:
            return "R-Ctrl";
        case ESCAPE:
            return "Escape";
        case END:
            return "End";
        case INSERT:
            return "Insert";
        case NUMPAD_0:
            return "Numpad 0";
        case NUMPAD_1:
            return "Numpad 1";
        case NUMPAD_2:
            return "Numpad 2";
        case NUMPAD_3:
            return "Numpad 3";
        case NUMPAD_4:
            return "Numpad 4";
        case NUMPAD_5:
            return "Numpad 5";
        case NUMPAD_6:
            return "Numpad 6";
        case NUMPAD_7:
            return "Numpad 7";
        case NUMPAD_8:
            return "Numpad 8";
        case NUMPAD_9:
            return "Numpad 9";
        case COLON:
            return ":";
        case F1:
            return "F1";
        case F2:
            return "F2";
        case F3:
            return "F3";
        case F4:
            return "F4";
        case F5:
            return "F5";
        case F6:
            return "F6";
        case F7:
            return "F7";
        case F8:
            return "F8";
        case F9:
            return "F9";
        case F10:
            return "F10";
        case F11:
            return "F11";
        case F12:
            return "F12";
        // BUTTON_CIRCLE unhandled, as it conflicts with the more likely to be pressed F12
        default:
            // key name not found
            return null;
    }
}
