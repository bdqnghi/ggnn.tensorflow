static private String splitError(int x, int y, int[] rgba, String name) {
    throw new RuntimeException("Invalid " + name + " ninepatch split pixel at " + x + ", " + y + ", rgba: " + rgba[0] + ", " + rgba[1] + ", " + rgba[2] + ", " + rgba[3]);
}
