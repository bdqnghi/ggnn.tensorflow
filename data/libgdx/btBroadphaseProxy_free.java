/**
 * delete the native object if required and allow the instance to be reused by the obtain method
 */
public static void free(final btBroadphaseProxy inst) {
    inst.dispose();
    pool.free(inst);
}
