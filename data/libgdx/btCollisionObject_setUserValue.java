/**
 * @param value A user definable value which allows you to quickly identify this collision object. Some frequently called
 * methods rather return this value than the collision object itself to minimize JNI overhead.
 */
public void setUserValue(int value) {
    gdxBridge.setUserValue(userValue = value);
}
