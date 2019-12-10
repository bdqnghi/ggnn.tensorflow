@Override
public boolean isTouched() {
    synchronized (this) {
        if (hasMultitouch) {
            for (int pointer = 0; pointer < NUM_TOUCHES; pointer++) {
                if (touched[pointer]) {
                    return true;
                }
            }
        }
        return touched[0];
    }
}
