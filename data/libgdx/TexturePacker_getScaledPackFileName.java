public String getScaledPackFileName(String packFileName, int scaleIndex) {
    // Use suffix if not empty string.
    if (scaleSuffix[scaleIndex].length() > 0)
        packFileName += scaleSuffix[scaleIndex];
    else {
        // Otherwise if scale != 1 or multiple scales, use subdirectory.
        float scaleValue = scale[scaleIndex];
        if (scale.length != 1) {
            packFileName = (scaleValue == (int) scaleValue ? Integer.toString((int) scaleValue) : Float.toString(scaleValue)) + "/" + packFileName;
        }
    }
    return packFileName;
}
