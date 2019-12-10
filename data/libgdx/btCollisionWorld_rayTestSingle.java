public static void rayTestSingle(Matrix4 rayFromTrans, Matrix4 rayToTrans, btCollisionObject collisionObject, btCollisionShape collisionShape, Matrix4 colObjWorldTransform, RayResultCallback resultCallback) {
    CollisionJNI.btCollisionWorld_rayTestSingle(rayFromTrans, rayToTrans, btCollisionObject.getCPtr(collisionObject), collisionObject, btCollisionShape.getCPtr(collisionShape), collisionShape, colObjWorldTransform, RayResultCallback.getCPtr(resultCallback), resultCallback);
}
