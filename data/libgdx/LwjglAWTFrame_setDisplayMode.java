protected void setDisplayMode(int width, int height) {
    LwjglAWTFrame.this.getContentPane().setPreferredSize(new Dimension(width, height));
    LwjglAWTFrame.this.getContentPane().invalidate();
    LwjglAWTFrame.this.pack();
    LwjglAWTFrame.this.setLocationRelativeTo(null);
    updateSize(width, height);
}
