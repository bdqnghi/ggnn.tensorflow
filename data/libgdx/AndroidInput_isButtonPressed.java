@Override
public boolean isButtonPressed(int button) {
    synchronized (this) {
        if (hasMultitouch) {
            for (int pointer = 0; pointer < NUM_TOUCHES; pointer++) {
                if (touched[pointer] && (this.button[pointer] == button)) {
                    return true;
                }
            }
        }
        return (touched[0] && (this.button[0] == button));
    }
}
