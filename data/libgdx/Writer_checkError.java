/**
 * Returns true if this writer has encountered and suppressed an error. Used by PrintWriters as an alternative to checked
 * exceptions.
 */
boolean checkError() {
    return false;
}
