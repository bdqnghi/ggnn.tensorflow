public static EventManager get() {
    if (mInstance == null)
        mInstance = new EventManager();
    return mInstance;
}
