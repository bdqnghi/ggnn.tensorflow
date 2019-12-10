@Override
public void run() {
    if (!longPressFired)
        longPressFired = listener.longPress(pointer1.x, pointer1.y);
}
