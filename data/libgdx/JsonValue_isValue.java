/**
 * Returns true if this is not an array or object.
 */
public boolean isValue() {
    switch(type) {
        case stringValue:
        case doubleValue:
        case longValue:
        case booleanValue:
        case nullValue:
            return true;
    }
    return false;
}
