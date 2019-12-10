/**
 * Calculates the aspect ratio ( width / height ) of this rectangle
 * @return the aspect ratio of this rectangle. Returns Float.NaN if height is 0 to avoid ArithmeticException
 */
public float getAspectRatio() {
    return (height == 0) ? Float.NaN : width / height;
}
