/**
 * Add the instance to the managed instances.
 * You should avoid using this method. This method is intended for internal purposes only.
 */
public static void addInstance(final btCollisionObject obj) {
    instances.put(getCPtr(obj), obj);
}
