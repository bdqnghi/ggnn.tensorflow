private void createWindow() {
    JFrame window = new JFrame();
    LwjglAWTCanvas canvas = new LwjglAWTCanvas(new UITest(), canvas1);
    window.getContentPane().add(canvas.getCanvas(), BorderLayout.CENTER);
    window.pack();
    window.setVisible(true);
    window.setSize(200, 200);
}
