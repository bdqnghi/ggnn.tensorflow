/**
 * Sets the time to wait for the HTTP request to be processed, use 0 block until it is done. The timeout is used for both
 * the timeout when establishing TCP connection, and the timeout until the first byte of data is received.
 * @param timeOut the number of milliseconds to wait before giving up, 0 or negative to block until the operation is done
 */
public void setTimeOut(int timeOut) {
    this.timeOut = timeOut;
}
