public Shape createStrokedShape(Shape shape) {
    GeneralPath result = new GeneralPath();
    PathIterator it = new FlatteningPathIterator(shape.getPathIterator(null), FLATNESS);
    float[] points = new float[6];
    float moveX = 0, moveY = 0;
    float lastX = 0, lastY = 0;
    float thisX = 0, thisY = 0;
    int type = 0;
    float next = 0;
    int phase = 0;
    while (!it.isDone()) {
        type = it.currentSegment(points);
        switch(type) {
            case PathIterator.SEG_MOVETO:
                moveX = lastX = points[0];
                moveY = lastY = points[1];
                result.moveTo(moveX, moveY);
                next = wavelength / 2;
                break;
            case PathIterator.SEG_CLOSE:
                points[0] = moveX;
                points[1] = moveY;
            case PathIterator.SEG_LINETO:
                thisX = points[0];
                thisY = points[1];
                float dx = thisX - lastX;
                float dy = thisY - lastY;
                float distance = (float) Math.sqrt(dx * dx + dy * dy);
                if (distance >= next) {
                    float r = 1.0f / distance;
                    while (distance >= next) {
                        float x = lastX + next * dx * r;
                        float y = lastY + next * dy * r;
                        if ((phase & 1) == 0)
                            result.lineTo(x + amplitude * dy * r, y - amplitude * dx * r);
                        else
                            result.lineTo(x - amplitude * dy * r, y + amplitude * dx * r);
                        next += wavelength;
                        phase++;
                    }
                }
                next -= distance;
                lastX = thisX;
                lastY = thisY;
                if (type == PathIterator.SEG_CLOSE)
                    result.closePath();
                break;
        }
        it.next();
    }
    return new BasicStroke(getWidth(), BasicStroke.CAP_SQUARE, getJoin()).createStrokedShape(result);
}
