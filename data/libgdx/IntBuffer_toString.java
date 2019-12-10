/**
 * Returns a string represents of the state of this int buffer.
 *
 * @return a string represents of the state of this int buffer.
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
