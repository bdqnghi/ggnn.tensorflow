public static void objectQuerySingleInternal(btConvexShape castShape, Matrix4 convexFromTrans, Matrix4 convexToTrans, btCollisionObjectWrapper colObjWrap, ConvexResultCallback resultCallback, float allowedPenetration) {
    CollisionJNI.btCollisionWorld_objectQuerySingleInternal(btConvexShape.getCPtr(castShape), castShape, convexFromTrans, convexToTrans, btCollisionObjectWrapper.getCPtr(colObjWrap), colObjWrap, ConvexResultCallback.getCPtr(resultCallback), resultCallback, allowedPenetration);
}
