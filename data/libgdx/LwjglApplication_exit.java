@Override
public void exit() {
    postRunnable(new Runnable() {

        @Override
        public void run() {
            running = false;
        }
    });
}
