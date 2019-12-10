private void renderBodies(World world) {
    renderer.begin(ShapeType.Line);
    if (drawBodies || drawAABBs) {
        world.getBodies(bodies);
        for (Iterator<Body> iter = bodies.iterator(); iter.hasNext(); ) {
            Body body = iter.next();
            if (body.isActive() || drawInactiveBodies)
                renderBody(body);
        }
    }
    if (drawJoints) {
        world.getJoints(joints);
        for (Iterator<Joint> iter = joints.iterator(); iter.hasNext(); ) {
            Joint joint = iter.next();
            drawJoint(joint);
        }
    }
    renderer.end();
    if (drawContacts) {
        renderer.begin(ShapeType.Point);
        for (Contact contact : world.getContactList()) drawContact(contact);
        renderer.end();
    }
}
