@Override
public void exit() {
    postRunnable(new Runnable() {

        @Override
        public void run() {
            stop();
            System.exit(-1);
        }
    });
}
