/**
 * Remove the instance to the managed instances.
 * Be careful using this method. This method is intended for internal purposes only.
 */
public static void removeInstance(final btCollisionObject obj) {
    instances.remove(getCPtr(obj));
}
