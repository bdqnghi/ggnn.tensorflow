public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
    if (button == 0) {
        int border = resizeBorder;
        float width = getWidth(), height = getHeight();
        edge = 0;
        if (isResizable && x >= 0 && x < width && y >= 0 && y < height) {
            if (x < border)
                edge |= Align.left;
            if (x > width - border)
                edge |= Align.right;
            if (y < border)
                edge |= Align.bottom;
            if (y > height - border)
                edge |= Align.top;
            if (edge != 0)
                border += 25;
            if (x < border)
                edge |= Align.left;
            if (x > width - border)
                edge |= Align.right;
            if (y < border)
                edge |= Align.bottom;
            if (y > height - border)
                edge |= Align.top;
        }
        if (isMovable && edge == 0 && y <= height && y >= height - getPadTop() && x >= 0 && x <= width)
            edge = MOVE;
        dragging = edge != 0;
        startX = x;
        startY = y;
        lastX = x;
        lastY = y;
    }
    return edge != 0 || isModal;
}
