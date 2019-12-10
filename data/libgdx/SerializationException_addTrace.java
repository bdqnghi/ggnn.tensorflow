/**
 * Adds information to the exception message about where in the the object graph serialization failure occurred. Serializers
 * can catch {@link SerializationException}, add trace information, and rethrow the exception.
 */
public void addTrace(String info) {
    if (info == null)
        throw new IllegalArgumentException("info cannot be null.");
    if (trace == null)
        trace = new StringBuffer(512);
    trace.append('\n');
    trace.append(info);
}
