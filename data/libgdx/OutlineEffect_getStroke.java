public Stroke getStroke() {
    if (stroke == null)
        return new BasicStroke(width, BasicStroke.CAP_SQUARE, join);
    return stroke;
}
