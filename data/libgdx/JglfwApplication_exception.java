/**
 * Called when an uncaught exception happens in the game loop. Default implementation prints the exception and calls
 * System.exit(0).
 */
protected void exception(Throwable ex) {
    ex.printStackTrace();
    System.exit(0);
}
