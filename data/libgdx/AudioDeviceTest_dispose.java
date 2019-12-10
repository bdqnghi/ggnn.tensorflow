@Override
public void dispose() {
    stop = true;
    try {
        thread.join();
    } catch (InterruptedException e) {
        e.printStackTrace();
    }
}
