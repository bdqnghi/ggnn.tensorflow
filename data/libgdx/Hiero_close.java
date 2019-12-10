public void close() {
    final long endTime = System.currentTimeMillis();
    new Thread(new Runnable() {

        public void run() {
            if (endTime - startTime < minMillis) {
                addMouseListener(new MouseAdapter() {

                    public void mousePressed(MouseEvent evt) {
                        dispose();
                    }
                });
                try {
                    Thread.sleep(minMillis - (endTime - startTime));
                } catch (InterruptedException ignored) {
                }
            }
            EventQueue.invokeLater(new Runnable() {

                public void run() {
                    dispose();
                }
            });
        }
    }, "Splash").start();
}
