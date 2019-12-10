/**
 * Adds the nodes of the specified model to a new node of the model being build. After this method the given model can no
 * longer be used. Do not call the {@link Model#dispose()} method on that model.
 * @return The newly created node containing the nodes of the given model.
 */
public Node node(final String id, final Model model) {
    final Node node = new Node();
    node.id = id;
    node.addChildren(model.nodes);
    node(node);
    for (final Disposable disposable : model.getManagedDisposables()) manage(disposable);
    return node;
}
