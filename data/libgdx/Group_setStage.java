protected void setStage(Stage stage) {
    super.setStage(stage);
    Actor[] childrenArray = children.items;
    for (int i = 0, n = children.size; i < n; i++) // StackOverflowError here means the group is its own ancestor.
    childrenArray[i].setStage(stage);
}
