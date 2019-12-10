public static void main(String[] args) {
    for (LookAndFeelInfo info : UIManager.getInstalledLookAndFeels()) {
        if ("Nimbus".equals(info.getName())) {
            try {
                UIManager.setLookAndFeel(info.getClassName());
            } catch (Throwable ignored) {
            }
            break;
        }
    }
    EventQueue.invokeLater(new Runnable() {

        public void run() {
            new PreAlpha();
        }
    });
}
