/**
 * Calculates the world transform; the product of local transform and the parent's world transform.
 * @return the world transform
 */
public Matrix4 calculateWorldTransform() {
    if (inheritTransform && parent != null)
        globalTransform.set(parent.globalTransform).mul(localTransform);
    else
        globalTransform.set(localTransform);
    return globalTransform;
}
