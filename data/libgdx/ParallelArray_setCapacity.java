/**
 * Sets the capacity.
 * Each contained channel will be resized to match the required capacity and the current data will be preserved.
 */
public void setCapacity(int requiredCapacity) {
    if (capacity != requiredCapacity) {
        for (Channel channel : arrays) {
            channel.setCapacity(requiredCapacity);
        }
        capacity = requiredCapacity;
    }
}
