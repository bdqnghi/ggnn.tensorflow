@Override
public void exit() {
    handler.post(new Runnable() {

        @Override
        public void run() {
            AndroidApplication.this.finish();
        }
    });
}
