public static void rayTestSingleInternal(Matrix4 rayFromTrans, Matrix4 rayToTrans, btCollisionObjectWrapper collisionObjectWrap, RayResultCallback resultCallback) {
    CollisionJNI.btCollisionWorld_rayTestSingleInternal(rayFromTrans, rayToTrans, btCollisionObjectWrapper.getCPtr(collisionObjectWrap), collisionObjectWrap, RayResultCallback.getCPtr(resultCallback), resultCallback);
}
