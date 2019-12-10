private void fillOrStrokePath(DrawType drawType) {
    switch(drawType) {
        case FILL:
            context.fill();
            break;
        case STROKE:
            context.stroke();
            break;
    }
}
