/**
 * Adds this node as child to specified parent Node, synonym for: <code>parent.addChild(this)</code>
 * @param parent The Node to attach this Node to.
 */
public <T extends Node> void attachTo(T parent) {
    parent.addChild(this);
}
