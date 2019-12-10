public static float[] createPerspectiveMatrix(int fieldOfViewVertical, float aspectRatio, float minimumClearance, float maximumClearance) {
    double fieldOfViewInRad = fieldOfViewVertical * Math.PI / 180.0;
    return new float[] { (float) (Math.tan(fieldOfViewInRad) / aspectRatio), 0, 0, 0, 0, (float) (1 / Math.tan(fieldOfViewVertical * Math.PI / 180.0)), 0, 0, 0, 0, (minimumClearance + maximumClearance) / (minimumClearance - maximumClearance), -1, 0, 0, 2 * minimumClearance * maximumClearance / (minimumClearance - maximumClearance), 0 };
}
