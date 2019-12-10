/**
 * Sets the factor by which to downscale the image during processing.
 * The output image will be smaller than the input image by this factor, rounded downwards.
 *
 * <p> For greater accuracy, images to be used as input for a distance field are often
 * generated at higher resolution.
 *
 * @param downscale a positive integer
 * @throws IllegalArgumentException if downscale is not positive
 */
public void setDownscale(int downscale) {
    if (downscale <= 0)
        throw new IllegalArgumentException("downscale must be positive");
    this.downscale = downscale;
}
