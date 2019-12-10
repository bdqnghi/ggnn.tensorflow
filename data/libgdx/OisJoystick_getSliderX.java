public boolean getSliderX(int sliderIndex) {
    if (sliderIndex < 0 || sliderIndex >= slidersX.length)
        return false;
    return slidersX[sliderIndex];
}
