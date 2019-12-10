public boolean getSliderY(int sliderIndex) {
    if (sliderIndex < 0 || sliderIndex >= slidersY.length)
        return false;
    return slidersY[sliderIndex];
}
