public static void main(final String[] args) throws Exception {
    SwingUtilities.invokeLater(new Runnable() {

        public void run() {
            new Hiero(args);
        }
    });
}
