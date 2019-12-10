private void sliderMoved(int sliderIndex, int x, int y) {
    boolean xChanged = slidersX[sliderIndex] != (x == 1);
    boolean yChanged = slidersY[sliderIndex] != (y == 1);
    slidersX[sliderIndex] = x == 1;
    slidersY[sliderIndex] = y == 1;
    if (listener != null) {
        if (xChanged)
            listener.xSliderMoved(this, sliderIndex, x == 1);
        if (yChanged)
            listener.ySliderMoved(this, sliderIndex, y == 1);
    }
}
