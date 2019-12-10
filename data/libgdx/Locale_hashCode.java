@Override
public synchronized int hashCode() {
    return countryCode.hashCode() + languageCode.hashCode() + variantCode.hashCode();
}
