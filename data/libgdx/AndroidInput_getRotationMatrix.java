/**
 * Returns the rotation matrix describing the devices rotation as per <a href=
 * "http://developer.android.com/reference/android/hardware/SensorManager.html#getRotationMatrix(float[], float[], float[], float[])"
 * >SensorManager#getRotationMatrix(float[], float[], float[], float[])</a>. Does not manipulate the matrix if the platform
 * does not have an accelerometer.
 * @param matrix
 */
public void getRotationMatrix(float[] matrix) {
    SensorManager.getRotationMatrix(matrix, null, accelerometerValues, magneticFieldValues);
}
