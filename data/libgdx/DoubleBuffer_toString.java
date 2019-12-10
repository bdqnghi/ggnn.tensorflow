/**
 * Returns a string representing the state of this double buffer.
 *
 * @return A string representing the state of this double buffer.
 * @since Android 1.0
 */
public String toString() {
    StringBuffer buf = new StringBuffer();
    buf.append(getClass().getName());
    // $NON-NLS-1$
    buf.append(", status: capacity=");
    buf.append(capacity());
    // $NON-NLS-1$
    buf.append(" position=");
    buf.append(position());
    // $NON-NLS-1$
    buf.append(" limit=");
    buf.append(limit());
    return buf.toString();
}
