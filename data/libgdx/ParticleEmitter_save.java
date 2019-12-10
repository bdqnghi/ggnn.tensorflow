public void save(Writer output) throws IOException {
    super.save(output);
    if (!active)
        return;
    output.write("shape: " + shape + "\n");
    if (shape == SpawnShape.ellipse) {
        output.write("edges: " + edges + "\n");
        output.write("side: " + side + "\n");
    }
}
