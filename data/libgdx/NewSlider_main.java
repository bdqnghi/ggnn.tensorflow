public static void main(String[] args) throws Exception {
    EventQueue.invokeLater(new Runnable() {

        public void run() {
            JFrame frame = new JFrame();
            frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
            frame.setSize(480, 320);
            frame.setLocationRelativeTo(null);
            JPanel panel = new JPanel();
            frame.getContentPane().add(panel);
            panel.add(new NewSlider(200, 100, 500, 0.1f, 150, 300));
            frame.setVisible(true);
        }
    });
}
