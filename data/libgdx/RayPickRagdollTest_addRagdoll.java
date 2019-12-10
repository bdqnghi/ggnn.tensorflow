public void addRagdoll(final float x, final float y, final float z) {
    final Matrix4 tmpM = new Matrix4();
    btRigidBody pelvis = (btRigidBody) world.add("pelvis", x, y + 1, z).body;
    btRigidBody spine = (btRigidBody) world.add("spine", x, y + 1.2f, z).body;
    btRigidBody head = (btRigidBody) world.add("head", x, y + 1.6f, z).body;
    btRigidBody leftupperleg = (btRigidBody) world.add("upperleg", x - 0.18f, y + 0.65f, z).body;
    btRigidBody leftlowerleg = (btRigidBody) world.add("lowerleg", x - 0.18f, y + 0.2f, z).body;
    btRigidBody rightupperleg = (btRigidBody) world.add("upperleg", x + 0.18f, y + 0.65f, z).body;
    btRigidBody rightlowerleg = (btRigidBody) world.add("lowerleg", x + 0.18f, y + 0.2f, z).body;
    btRigidBody leftupperarm = (btRigidBody) world.add("upperarm", tmpM.setFromEulerAnglesRad(PI2, 0, 0).trn(x - 0.35f, y + 1.45f, z)).body;
    btRigidBody leftlowerarm = (btRigidBody) world.add("lowerarm", tmpM.setFromEulerAnglesRad(PI2, 0, 0).trn(x - 0.7f, y + 1.45f, z)).body;
    btRigidBody rightupperarm = (btRigidBody) world.add("upperarm", tmpM.setFromEulerAnglesRad(-PI2, 0, 0).trn(x + 0.35f, y + 1.45f, z)).body;
    btRigidBody rightlowerarm = (btRigidBody) world.add("lowerarm", tmpM.setFromEulerAnglesRad(-PI2, 0, 0).trn(x + 0.7f, y + 1.45f, z)).body;
    final Matrix4 localA = new Matrix4();
    final Matrix4 localB = new Matrix4();
    btHingeConstraint hingeC = null;
    btConeTwistConstraint coneC = null;
    // PelvisSpine
    localA.setFromEulerAnglesRad(0, PI2, 0).trn(0, 0.15f, 0);
    localB.setFromEulerAnglesRad(0, PI2, 0).trn(0, -0.15f, 0);
    constraints.add(hingeC = new btHingeConstraint(pelvis, spine, localA, localB));
    hingeC.setLimit(-PI4, PI2);
    ((btDynamicsWorld) world.collisionWorld).addConstraint(hingeC, true);
    // SpineHead
    localA.setFromEulerAnglesRad(PI2, 0, 0).trn(0, 0.3f, 0);
    localB.setFromEulerAnglesRad(PI2, 0, 0).trn(0, -0.14f, 0);
    constraints.add(coneC = new btConeTwistConstraint(spine, head, localA, localB));
    coneC.setLimit(PI4, PI4, PI2);
    ((btDynamicsWorld) world.collisionWorld).addConstraint(coneC, true);
    // LeftHip
    localA.setFromEulerAnglesRad(-PI4 * 5f, 0, 0).trn(-0.18f, -0.1f, 0);
    localB.setFromEulerAnglesRad(-PI4 * 5f, 0, 0).trn(0, 0.225f, 0);
    constraints.add(coneC = new btConeTwistConstraint(pelvis, leftupperleg, localA, localB));
    coneC.setLimit(PI4, PI4, 0);
    ((btDynamicsWorld) world.collisionWorld).addConstraint(coneC, true);
    // LeftKnee
    localA.setFromEulerAnglesRad(0, PI2, 0).trn(0, -0.225f, 0);
    localB.setFromEulerAnglesRad(0, PI2, 0).trn(0, 0.185f, 0);
    constraints.add(hingeC = new btHingeConstraint(leftupperleg, leftlowerleg, localA, localB));
    hingeC.setLimit(0, PI2);
    ((btDynamicsWorld) world.collisionWorld).addConstraint(hingeC, true);
    // RightHip
    localA.setFromEulerAnglesRad(-PI4 * 5f, 0, 0).trn(0.18f, -0.1f, 0);
    localB.setFromEulerAnglesRad(-PI4 * 5f, 0, 0).trn(0, 0.225f, 0);
    constraints.add(coneC = new btConeTwistConstraint(pelvis, rightupperleg, localA, localB));
    coneC.setLimit(PI4, PI4, 0);
    ((btDynamicsWorld) world.collisionWorld).addConstraint(coneC, true);
    // RightKnee
    localA.setFromEulerAnglesRad(0, PI2, 0).trn(0, -0.225f, 0);
    localB.setFromEulerAnglesRad(0, PI2, 0).trn(0, 0.185f, 0);
    constraints.add(hingeC = new btHingeConstraint(rightupperleg, rightlowerleg, localA, localB));
    hingeC.setLimit(0, PI2);
    ((btDynamicsWorld) world.collisionWorld).addConstraint(hingeC, true);
    // LeftShoulder
    localA.setFromEulerAnglesRad(PI, 0, 0).trn(-0.2f, 0.15f, 0);
    localB.setFromEulerAnglesRad(PI2, 0, 0).trn(0, -0.18f, 0);
    constraints.add(coneC = new btConeTwistConstraint(pelvis, leftupperarm, localA, localB));
    coneC.setLimit(PI2, PI2, 0);
    ((btDynamicsWorld) world.collisionWorld).addConstraint(coneC, true);
    // LeftElbow
    localA.setFromEulerAnglesRad(0, PI2, 0).trn(0, 0.18f, 0);
    localB.setFromEulerAnglesRad(0, PI2, 0).trn(0, -0.14f, 0);
    constraints.add(hingeC = new btHingeConstraint(leftupperarm, leftlowerarm, localA, localB));
    hingeC.setLimit(0, PI2);
    ((btDynamicsWorld) world.collisionWorld).addConstraint(hingeC, true);
    // RightShoulder
    localA.setFromEulerAnglesRad(PI, 0, 0).trn(0.2f, 0.15f, 0);
    localB.setFromEulerAnglesRad(PI2, 0, 0).trn(0, -0.18f, 0);
    constraints.add(coneC = new btConeTwistConstraint(pelvis, rightupperarm, localA, localB));
    coneC.setLimit(PI2, PI2, 0);
    ((btDynamicsWorld) world.collisionWorld).addConstraint(coneC, true);
    // RightElbow
    localA.setFromEulerAnglesRad(0, PI2, 0).trn(0, 0.18f, 0);
    localB.setFromEulerAnglesRad(0, PI2, 0).trn(0, -0.14f, 0);
    constraints.add(hingeC = new btHingeConstraint(rightupperarm, rightlowerarm, localA, localB));
    hingeC.setLimit(0, PI2);
    ((btDynamicsWorld) world.collisionWorld).addConstraint(hingeC, true);
}
