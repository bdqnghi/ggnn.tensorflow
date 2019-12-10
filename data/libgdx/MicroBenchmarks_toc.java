void toc(final String info) {
    final float time = (System.nanoTime() - start) / 1000000000.0f;
    tv.post(new Runnable() {

        @Override
        public void run() {
            StringBuilder buff = new StringBuilder(tv.getText());
            buff.append(info).append(", ").append(time).append(" secs\n");
            tv.setText(buff.toString());
        }
    });
    Log.d("MicroBenchmarks", info + ", " + time);
}
