/**
 * Removes the attribute from the material, i.e.: material.remove(BlendingAttribute.ID); Can also be used to remove multiple
 * attributes also, i.e. remove(AttributeA.ID | AttributeB.ID);
 */
public final void remove(final long mask) {
    for (int i = attributes.size - 1; i >= 0; i--) {
        final long type = attributes.get(i).type;
        if ((mask & type) == type) {
            attributes.removeIndex(i);
            disable(type);
            sorted = false;
        }
    }
}
