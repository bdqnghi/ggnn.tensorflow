/**
 * @return the value whose interval contains a random probability in [0,1]
 */
public T value() {
    return value(MathUtils.random());
}
