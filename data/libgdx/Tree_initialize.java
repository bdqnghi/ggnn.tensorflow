private void initialize() {
    addListener(clickListener = new ClickListener() {

        public void clicked(InputEvent event, float x, float y) {
            Node node = getNodeAt(y);
            if (node == null)
                return;
            if (node != getNodeAt(getTouchDownY()))
                return;
            if (selection.getMultiple() && selection.hasItems() && UIUtils.shift()) {
                // Select range (shift).
                float low = selection.getLastSelected().actor.getY();
                float high = node.actor.getY();
                if (!UIUtils.ctrl())
                    selection.clear();
                if (low > high)
                    selectNodes(rootNodes, high, low);
                else
                    selectNodes(rootNodes, low, high);
                selection.fireChangeEvent();
                return;
            }
            if (node.children.size > 0 && (!selection.getMultiple() || !UIUtils.ctrl())) {
                // Toggle expanded.
                float rowX = node.actor.getX();
                if (node.icon != null)
                    rowX -= iconSpacingRight + node.icon.getMinWidth();
                if (x < rowX) {
                    node.setExpanded(!node.expanded);
                    return;
                }
            }
            if (!node.isSelectable())
                return;
            selection.choose(node);
        }

        public boolean mouseMoved(InputEvent event, float x, float y) {
            setOverNode(getNodeAt(y));
            return false;
        }

        public void exit(InputEvent event, float x, float y, int pointer, Actor toActor) {
            super.exit(event, x, y, pointer, toActor);
            if (toActor == null || !toActor.isDescendantOf(Tree.this))
                setOverNode(null);
        }
    });
}
